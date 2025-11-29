@class NSArray, NSString, RTVVoipModel;

@interface RTVVoipNotifyViewContext : NSObject

@property (readonly, copy, nonatomic) NSArray *avatarUrlList;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL isEnablePreJoinRoom;
@property (readonly, nonatomic) BOOL isEnablePreloadFeedPlayer;
@property (readonly, nonatomic) RTVVoipModel *voip;

- (id)pushControlModel;
- (void)updateEnablePreJoinRoom:(BOOL)a0;
- (void)updateEnablePreloadFeedPlayer:(BOOL)a0;
- (id)initWithAvatarURLList:(id)a0 displayName:(id)a1 voip:(id)a2;
- (void).cxx_destruct;

@end
