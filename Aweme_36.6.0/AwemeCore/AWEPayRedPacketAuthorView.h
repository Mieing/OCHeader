@class UIView, UIImageView, UILabel, AWEIMDouyinRedPacketCoverModel, UIButton;

@interface AWEPayRedPacketAuthorView : UIView

@property (retain, nonatomic) AWEIMDouyinRedPacketCoverModel *model;
@property (retain, nonatomic) UILabel *fromLabel;
@property (retain, nonatomic) UIImageView *avatar;
@property (retain, nonatomic) UILabel *authorName;
@property (retain, nonatomic) UIImageView *followedView;
@property (retain, nonatomic) UIButton *follow;
@property (retain, nonatomic) UIView *cutView;
@property (copy, nonatomic) id /* block */ followBlock;
@property (copy, nonatomic) id /* block */ avatarBlock;

- (void)setFollowButtonHidden;
- (BOOL)p_isShowFollow;
- (void)p_transferToAuthor:(id)a0;
- (void)p_followAuthor;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateWithModel:(id)a0;

@end
