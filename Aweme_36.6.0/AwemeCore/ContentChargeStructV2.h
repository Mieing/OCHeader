@class NSString, PreviewConfigV2;

@interface ContentChargeStructV2 : GPBMessage

@property (nonatomic) BOOL isChargeContent;
@property (nonatomic) BOOL hasIsChargeContent;
@property (nonatomic) BOOL hasPaid_p;
@property (nonatomic) BOOL hasHasPaid_p;
@property (retain, nonatomic) PreviewConfigV2 *previewConfig;
@property (nonatomic) BOOL hasPreviewConfig;
@property (nonatomic) BOOL isDeviceOver;
@property (nonatomic) BOOL hasIsDeviceOver;
@property (nonatomic) BOOL useDemotion;
@property (nonatomic) BOOL hasUseDemotion;
@property (nonatomic) long long expireTime;
@property (nonatomic) BOOL hasExpireTime;
@property (nonatomic) BOOL isSubscribeContent;
@property (nonatomic) BOOL hasIsSubscribeContent;
@property (nonatomic) BOOL isDelivery;
@property (nonatomic) BOOL hasIsDelivery;
@property (copy, nonatomic) NSString *hasRightText_p;
@property (nonatomic) BOOL hasHasRightText_p;
@property (nonatomic) BOOL disableAutoOpenPayPage;
@property (nonatomic) BOOL hasDisableAutoOpenPayPage;
@property (copy, nonatomic) NSString *noRightText;
@property (nonatomic) BOOL hasNoRightText;
@property (copy, nonatomic) NSString *maskText;
@property (nonatomic) BOOL hasMaskText;
@property (nonatomic) long long subscribeMemberFreeTag;
@property (nonatomic) BOOL hasSubscribeMemberFreeTag;

+ (id)descriptor;

@end
