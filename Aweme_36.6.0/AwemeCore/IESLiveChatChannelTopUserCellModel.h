@class NSArray, HTSLiveUser;
@protocol IESLiveChatChannelTopUserCellUpdatable, IESLiveChatChannelTopUserListCellDataProvider;

@interface IESLiveChatChannelTopUserCellModel : NSObject

@property (copy, nonatomic) NSArray *avatarImageUrl;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL isOwner;
@property (weak, nonatomic) id<IESLiveChatChannelTopUserCellUpdatable> cell;
@property (weak, nonatomic) id<IESLiveChatChannelTopUserListCellDataProvider> dataProvider;
@property (readonly, nonatomic) BOOL isAnimated;

- (void)openUserPreview;
- (void)bindUser:(id)a0;
- (void).cxx_destruct;

@end
