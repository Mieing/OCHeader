@class NSMutableArray;

@interface ClipboardOperationReport : WXPBGeneratedMessage

@property (nonatomic) unsigned int clipboardOperationCount;
@property (retain, nonatomic) NSMutableArray *clipboardOperationList;

+ (void)initialize;

@end
