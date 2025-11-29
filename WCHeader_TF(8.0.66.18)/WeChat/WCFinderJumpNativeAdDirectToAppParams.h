@class NSString;

@interface WCFinderJumpNativeAdDirectToAppParams : NSObject

@property (retain, nonatomic) NSString *openSdkAppId;
@property (retain, nonatomic) NSString *appPageUrl;
@property (retain, nonatomic) NSString *appJumpUrl;
@property (nonatomic) BOOL internalJumpAppStore;
@property (retain, nonatomic) NSString *adExtInfo;
@property (retain, nonatomic) NSString *defaultJumpInfoBase64;
@property (retain, nonatomic) NSString *ulinkUrl;
@property (retain, nonatomic) NSString *dialogAppIcon;
@property (retain, nonatomic) NSString *dialogAppName;
@property (retain, nonatomic) NSString *dialogButtonTitle;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
