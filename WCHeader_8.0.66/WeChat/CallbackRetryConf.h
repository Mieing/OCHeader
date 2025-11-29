@class NSString;

@interface CallbackRetryConf : WXPBGeneratedMessage

@property (nonatomic) unsigned int intevalTime;
@property (nonatomic) unsigned int maxCount;
@property (retain, nonatomic) NSString *defaultWording;

+ (void)initialize;

@end
