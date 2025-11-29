@class NSString, MMWebImageView;

@interface MMFinderLiveConnectMicUserViewAvatarItem : NSObject

@property (retain, nonatomic) MMWebImageView *avatarView;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *stagingAvatarUri;
@property (readonly, nonatomic) NSString *actualAvatarUri;
@property (readonly, nonatomic) BOOL realAvatarSet;

- (id)initWithImageView:(id)a0;
- (void)commitStagedUpdate;
- (void).cxx_destruct;

@end
