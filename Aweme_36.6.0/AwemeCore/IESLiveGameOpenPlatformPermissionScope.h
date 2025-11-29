@class NSString, NSArray, NSMutableArray;

@interface IESLiveGameOpenPlatformPermissionScope : NSObject

@property (copy, nonatomic) NSString *scopeName;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appIconUrl;
@property (copy, nonatomic) NSString *scopeDesc;
@property (retain, nonatomic) NSArray *userAvatarUrls;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *userDesc;
@property (copy, nonatomic) NSString *privacyName;
@property (copy, nonatomic) NSString *privacyUrl;
@property (retain, nonatomic) NSMutableArray *grantBlocks;

- (id)getAppName;
- (void)getScopeDesc;
- (void).cxx_destruct;

@end
