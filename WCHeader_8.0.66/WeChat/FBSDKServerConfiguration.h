@class NSString, NSArray, NSURL, NSDate, FBSDKErrorConfiguration, NSDictionary;

@interface FBSDKServerConfiguration : NSObject <FBSDKCopying, NSSecureCoding> {
    NSDictionary *_dialogConfigurations;
    NSDictionary *_dialogFlows;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isAdvertisingIDEnabled) BOOL advertisingIDEnabled;
@property (readonly, copy, nonatomic) NSString *appID;
@property (readonly, copy, nonatomic) NSString *appName;
@property (readonly, nonatomic, getter=isDefaults) BOOL defaults;
@property (readonly, copy, nonatomic) NSString *defaultShareMode;
@property (readonly, nonatomic) FBSDKErrorConfiguration *errorConfiguration;
@property (readonly, nonatomic, getter=isImplicitLoggingSupported) BOOL implicitLoggingEnabled;
@property (readonly, nonatomic, getter=isImplicitPurchaseLoggingSupported) BOOL implicitPurchaseLoggingEnabled;
@property (readonly, nonatomic, getter=isCodelessEventsEnabled) BOOL codelessEventsEnabled;
@property (readonly, nonatomic, getter=isLoginTooltipEnabled) BOOL loginTooltipEnabled;
@property (readonly, nonatomic, getter=isNativeAuthFlowEnabled) BOOL nativeAuthFlowEnabled;
@property (readonly, nonatomic, getter=isSystemAuthenticationEnabled) BOOL systemAuthenticationEnabled;
@property (readonly, nonatomic, getter=isUninstallTrackingEnabled) BOOL uninstallTrackingEnabled;
@property (readonly, copy, nonatomic) NSString *loginTooltipText;
@property (readonly, copy, nonatomic) NSDate *timestamp;
@property (nonatomic) double sessionTimoutInterval;
@property (readonly, copy, nonatomic) NSString *loggingToken;
@property (readonly, nonatomic) unsigned long long smartLoginOptions;
@property (readonly, copy, nonatomic) NSURL *smartLoginBookmarkIconURL;
@property (readonly, copy, nonatomic) NSURL *smartLoginMenuIconURL;
@property (readonly, copy, nonatomic) NSString *updateMessage;
@property (readonly, copy, nonatomic) NSArray *eventBindings;
@property (readonly, nonatomic) long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAppID:(id)a0 appName:(id)a1 loginTooltipEnabled:(BOOL)a2 loginTooltipText:(id)a3 defaultShareMode:(id)a4 advertisingIDEnabled:(BOOL)a5 implicitLoggingEnabled:(BOOL)a6 implicitPurchaseLoggingEnabled:(BOOL)a7 codelessEventsEnabled:(BOOL)a8 systemAuthenticationEnabled:(BOOL)a9 nativeAuthFlowEnabled:(BOOL)a10 uninstallTrackingEnabled:(BOOL)a11 dialogConfigurations:(id)a12 dialogFlows:(id)a13 timestamp:(id)a14 errorConfiguration:(id)a15 sessionTimeoutInterval:(double)a16 defaults:(BOOL)a17 loggingToken:(id)a18 smartLoginOptions:(unsigned long long)a19 smartLoginBookmarkIconURL:(id)a20 smartLoginMenuIconURL:(id)a21 updateMessage:(id)a22 eventBindings:(id)a23;
- (id)dialogConfigurationForDialogName:(id)a0;
- (BOOL)useNativeDialogForDialogName:(id)a0;
- (BOOL)useSafariViewControllerForDialogName:(id)a0;
- (BOOL)_useFeatureWithKey:(id)a0 dialogName:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
