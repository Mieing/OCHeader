@class NSString, WCAdSchemaDoubleLinkInfo, OpenApiLaunchContext, WCSKAdNetworkItem, WCAdOpenAppHalfScreenInfo;

@interface WCAdSchemaJumpInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *sdkAppId;
@property (retain, nonatomic) NSString *parameter;
@property (retain, nonatomic) NSString *appJumpUrl;
@property (retain, nonatomic) NSString *appPageUrl;
@property (nonatomic) BOOL bInternalJump;
@property (retain, nonatomic) NSString *messageExt;
@property (retain, nonatomic) WCSKAdNetworkItem *skAdItem;
@property (nonatomic) BOOL bIsShowLaunchFailToast;
@property (retain, nonatomic) OpenApiLaunchContext *launchContext;
@property (retain, nonatomic) WCAdOpenAppHalfScreenInfo *openAppHalfScreenInfo;
@property (retain, nonatomic) WCAdSchemaDoubleLinkInfo *doubleLinkInfo;
@property (copy, nonatomic) NSString *ulinkUrl;
@property (nonatomic) BOOL ulinkAllowNoPrompt;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isValid;
- (BOOL)isValidForUlinkUrl;
- (BOOL)isValidForDeeplink;
- (id)provideMessageExt;
- (void).cxx_destruct;

@end
