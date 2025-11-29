@class NSString;

@interface WCAdFinderDialogDirectToAppInfo : WCAdFinderDialogBaseInfo

@property (retain, nonatomic) NSString *openSdkAppId;
@property (retain, nonatomic) NSString *appPageUrl;
@property (retain, nonatomic) NSString *appJumpUrl;
@property (retain, nonatomic) NSString *ulinkUrl;
@property (nonatomic) BOOL internalJumpAppStore;
@property (retain, nonatomic) NSString *adExtInfo;
@property (retain, nonatomic) NSString *defaultJumpInfoBase64;

- (BOOL)isValidForUlinkUrl;
- (BOOL)isValidForDeeplink;
- (void).cxx_destruct;

@end
