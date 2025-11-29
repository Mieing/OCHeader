@class NSString, ResultCommContent;

@interface BizResult : WXPBGeneratedMessage

@property (retain, nonatomic) ResultCommContent *commContent;
@property (retain, nonatomic) NSString *bizUserAttrInfo;

+ (void)initialize;

@end
