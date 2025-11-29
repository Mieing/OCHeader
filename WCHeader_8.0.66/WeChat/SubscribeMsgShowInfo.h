@class NSString;

@interface SubscribeMsgShowInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int showType;
@property (retain, nonatomic) NSString *alertTitle;
@property (retain, nonatomic) NSString *alertContent;

+ (void)initialize;

@end
