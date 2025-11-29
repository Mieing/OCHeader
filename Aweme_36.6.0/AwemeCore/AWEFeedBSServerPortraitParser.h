@class NSDictionary, NSLock, NSString;

@interface AWEFeedBSServerPortraitParser : NSObject <AWESettingsComboRequestProtocol>

@property (retain, nonatomic, getter=getPortrait) NSDictionary *portraits;
@property (copy, nonatomic) NSDictionary *params;
@property (retain, nonatomic) NSLock *safeLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;
+ (id)settingsRequestParamsDictionary;
+ (id)settingsRequestPath;
+ (void)updateSettingsWithDictionary:(id)a0;
+ (void)doOriginalActions;
+ (void)processSolariaServerPortraits:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)parseServerPortrait;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
