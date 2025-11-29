@class IESECLiveReplayGoodsListContext, UIStackView, IESECLiveReplayGoodsListEntriesView, IESECLiveReplayGoodsListHeaderViewModel, UILabel, IESECLiveReplayGoodsListShopAvatar, NSString;

@interface IESECLiveReplayGoodsListHeaderViewHolder : UIView <IESECLiveReplayGoodsListEntriesViewDelegate>

@property (weak, nonatomic) IESECLiveReplayGoodsListContext *context;
@property (retain, nonatomic) UIStackView *containerStackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) IESECLiveReplayGoodsListHeaderViewModel *viewModel;
@property (retain, nonatomic) IESECLiveReplayGoodsListShopAvatar *shopAvatar;
@property (retain, nonatomic) IESECLiveReplayGoodsListEntriesView *entryView;
@property (copy, nonatomic) id /* block */ shopNameClickedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)avatarURL;
- (id)browsingTitle;
- (void)didClickedShopName:(id)a0;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (double)headerHeight;
- (id)title;
- (void)setupUI;

@end
