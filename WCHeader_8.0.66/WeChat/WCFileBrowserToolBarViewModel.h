@class NSArray, NSMutableDictionary, NSString, NSMutableArray;

@interface WCFileBrowserToolBarViewModel : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSMutableArray *fileInfos;
@property (retain, nonatomic) NSMutableDictionary *fileInfoDict;
@property (retain, nonatomic) NSArray *allowFileExtensions;
@property (copy, nonatomic) id /* block */ onDataChanged;
@property (retain, nonatomic) NSString *sendButtonTitle;

- (id)initWithType:(unsigned long long)a0;
- (id)fileInfosForDataType:(unsigned long long)a0;
- (unsigned long long)dataTypeForFileInfo:(id)a0;
- (int)addFile:(id)a0 dataType:(unsigned long long)a1;
- (void)removeFile:(id)a0 dataType:(unsigned long long)a1;
- (void)removeFile:(id)a0 dataType:(unsigned long long)a1 notify:(BOOL)a2;
- (unsigned int)fileCountForDataType:(unsigned long long)a0;
- (id)fileInfoSetForType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
