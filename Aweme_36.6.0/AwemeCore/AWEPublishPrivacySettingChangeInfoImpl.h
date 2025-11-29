@class NSDictionary, NSString;

@interface AWEPublishPrivacySettingChangeInfoImpl : NSObject <AWEPublishPrivacySettingChangeInfoProtocol>

@property (nonatomic) unsigned long long oldPrivacyOption;
@property (nonatomic) unsigned long long newPrivacyOption;
@property (copy, nonatomic) NSDictionary *param;
@property (nonatomic) BOOL isTrackable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
