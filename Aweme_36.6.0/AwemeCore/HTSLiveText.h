@class HTSLiveTextFormat, NSString, NSMutableDictionary, NSMutableArray;

@interface HTSLiveText : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *defaultPattern;
@property (retain, nonatomic) HTSLiveTextFormat *defaultFormat;
@property (nonatomic) BOOL hasDefaultFormat;
@property (retain, nonatomic) NSMutableArray *piecesArray;
@property (readonly, nonatomic) unsigned long long piecesArray_Count;
@property (retain, nonatomic) NSMutableDictionary *schemaInfos;
@property (readonly, nonatomic) unsigned long long schemaInfos_Count;

+ (id)descriptor;

- (void)ieslive_loadAllImageForImagePiecesWithDownloader:(id)a0 completion:(id /* block */)a1;
- (void)ieslive_loadAllImageForImagePiecesWithDownloader:(id)a0;

@end
