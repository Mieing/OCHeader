@class NSString, ContentInfo;

@interface QuickContentInteractResponse : WXPBGeneratedMessage

@property (nonatomic) int error;
@property (retain, nonatomic) NSString *errorMsg;
@property (retain, nonatomic) ContentInfo *contentInfo;

+ (void)initialize;

@end
