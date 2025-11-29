@class NSString;

@interface EcsSamplingPolicy : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *key;
@property (nonatomic) unsigned int from;
@property (nonatomic) unsigned int strategy;
@property (nonatomic) unsigned int hits;
@property (nonatomic) unsigned int base;
@property (nonatomic) unsigned int days;

+ (void)initialize;

@end
