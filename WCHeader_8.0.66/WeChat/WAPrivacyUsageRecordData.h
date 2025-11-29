@class NSString;

@interface WAPrivacyUsageRecordData : NSObject

@property (nonatomic) unsigned int timestamp;
@property (copy, nonatomic) NSString *fromPluginNickName;
@property (copy, nonatomic) NSString *desc;

- (void).cxx_destruct;

@end
