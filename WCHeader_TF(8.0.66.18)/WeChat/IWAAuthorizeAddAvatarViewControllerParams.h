@class NSString, OauthAvatarInfo;

@interface IWAAuthorizeAddAvatarViewControllerParams : NSObject

@property (nonatomic) BOOL isEdit;
@property (retain, nonatomic) OauthAvatarInfo *editedAvatarInfo;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *defaultAvatarUrl;
@property (copy, nonatomic) NSString *defaultAvatarFileId;
@property (nonatomic) unsigned int sessionId;

- (void).cxx_destruct;

@end
