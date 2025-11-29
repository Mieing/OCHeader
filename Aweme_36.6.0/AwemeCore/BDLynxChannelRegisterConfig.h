@class NSString;

@interface BDLynxChannelRegisterConfig : NSObject

@property (copy, nonatomic) NSString *channelDescription;
@property (copy, nonatomic) NSString *channelName;
@property (nonatomic) unsigned long long minTemplateVersionCode;
@property (nonatomic) long long loadPolicy;

- (void).cxx_destruct;

@end
