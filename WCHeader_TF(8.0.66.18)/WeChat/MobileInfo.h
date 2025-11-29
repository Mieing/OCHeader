@class NSString;

@interface MobileInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int channel;
@property (retain, nonatomic) NSString *mobile;
@property (nonatomic) unsigned int carrierType;

+ (void)initialize;

@end
