@class NSString;

@interface UplinkUrlInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int channel;
@property (nonatomic) unsigned int channelCarrierType;
@property (retain, nonatomic) NSString *uplinkUrl;

+ (void)initialize;

@end
