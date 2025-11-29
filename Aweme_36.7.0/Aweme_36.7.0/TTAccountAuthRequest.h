@class NSString, NSOrderedSet, NSDictionary, NSArray;

@interface TTAccountAuthRequest : NSObject

@property (copy, nonatomic) NSString *bizSeq;
@property (nonatomic) long long serviceType;
@property (nonatomic) long long requestReason;
@property (nonatomic) BOOL enableOneAuth;
@property (copy, nonatomic) NSString *oneAuthScene;
@property (nonatomic) BOOL oneAuthFullscreen;
@property (nonatomic) BOOL skipOneAuthConfirm;
@property (nonatomic) BOOL forceWeb;
@property (nonatomic) BOOL needMobile;
@property (nonatomic) BOOL changeBind;
@property (retain, nonatomic) NSOrderedSet *permissions;
@property (retain, nonatomic) NSDictionary *permissionToFields;
@property (retain, nonatomic) NSOrderedSet *additionalPermissions;
@property (nonatomic) BOOL mustPortrait;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (retain, nonatomic) NSDictionary *oauthExtraInfo;
@property (copy, nonatomic) NSArray *fallbackIgnore;
@property (retain, nonatomic) NSDictionary *customPlatformInfo;
@property (nonatomic) BOOL transPermissionToPassport;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSDictionary *trackParams;

- (id)enterFrom;
- (id)enterMethod;
- (id)shareLoginconfig;
- (void)setShareLoginconfig:(id)a0;
- (id)passportShareOpenUniversalLink;
- (void).cxx_destruct;
- (long long)timeout;

@end
