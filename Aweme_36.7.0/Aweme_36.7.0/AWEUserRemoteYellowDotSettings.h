@class NSArray, NSString;

@interface AWEUserRemoteYellowDotSettings : NSObject <AWESettingsComboRequestProtocol>

@property (copy, nonatomic) NSArray *yellowPoints;
@property (copy, nonatomic) NSString *currentUserID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;
+ (id)settingsRequestPath;
+ (void)updateSettingsWithDictionary:(id)a0;
+ (id)sharedInstance;

- (void).cxx_destruct;

@end
