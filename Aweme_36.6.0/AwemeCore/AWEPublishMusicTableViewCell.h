@class UIButton, UILabel;
@protocol AWEPublishMusicTableViewCellDelegate;

@interface AWEPublishMusicTableViewCell : AWENewPublishTableCell

@property (nonatomic) BOOL hasMusic;
@property (retain, nonatomic) UIButton *accessButton;
@property (retain, nonatomic) UILabel *musicTitleLabel;
@property (nonatomic) BOOL autoSelectMusic;
@property (weak, nonatomic) id<AWEPublishMusicTableViewCellDelegate> delegate;

+ (id)initPublishMusicCellWithModel:(id)a0;

- (void)addSubviewsForContentView;
- (void)updateSelectedStateWithModel:(id)a0;
- (void)p_updateAccessButtonWithMusicModel:(id)a0;
- (void)p_updateMusicTitleLabelWithMusicModel:(id)a0;
- (void)p_updateAccessButtonViewRoateAnim;
- (void)accessButtonDidClicked:(id)a0;
- (void).cxx_destruct;

@end
