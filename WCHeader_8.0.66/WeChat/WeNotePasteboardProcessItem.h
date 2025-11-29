@class NSString;

@interface WeNotePasteboardProcessItem : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) id content;
@property (retain, nonatomic) NSString *fileExtension;
@property (nonatomic) BOOL isValidForFileNaming;

- (void).cxx_destruct;

@end
