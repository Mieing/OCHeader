@class UILabel, IESLiveSongCellTagLabel, IESLiveRecommendChorusInfoView, IESLiveKtvSongStruct, IESLiveKTVMultiChorusButton, UIButton, UIView, IESLiveKTVMultiChorusInfoView, NSString, IESLiveRecommendChorusInfoViewModel, IESLiveSongWantListenInfoView, UIStackView, PlaylistTab, UIImageView;
@protocol IESLiveSubscription, IESLiveSongBaseCellDelegate, IESLiveKTVOrderPanelProtocol;

@interface IESLiveSongBaseCell : IESLiveListViewCell <IESLiveSongBaseItemDelegate, IESLiveRecommendChorusInfoViewDelegate>

@property (retain, nonatomic) UIImageView *coverView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIStackView *scoreLabels;
@property (retain, nonatomic) IESLiveSongCellTagLabel *clipSingTag;
@property (retain, nonatomic) UILabel *singerLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIButton *favoriteButton;
@property (retain, nonatomic) IESLiveSongWantListenInfoView *wantListenInfoView;
@property (retain, nonatomic) IESLiveKTVMultiChorusButton *multiChorusButton;
@property (retain, nonatomic) IESLiveKTVMultiChorusInfoView *multiChorusInfoView;
@property (retain, nonatomic) UIImageView *chorusIcon;
@property (retain, nonatomic) UILabel *coverTimeLable;
@property (retain, nonatomic) UIView *tryListenIconContainerView;
@property (retain, nonatomic) UIImageView *tryListenIconImageView;
@property (retain, nonatomic) IESLiveKtvSongStruct *musicModel;
@property (retain, nonatomic) id<IESLiveSubscription> favoriteDisposable;
@property (weak, nonatomic) id<IESLiveSongBaseCellDelegate> delegate;
@property (weak, nonatomic) id<IESLiveKTVOrderPanelProtocol> panelModel;
@property (retain, nonatomic) PlaylistTab *category;
@property (retain, nonatomic) UIView *leftContainerView;
@property (retain, nonatomic) IESLiveRecommendChorusInfoView *recommendChorusInfoView;
@property (retain, nonatomic) IESLiveRecommendChorusInfoViewModel *recommendChorusInfoViewModel;
@property (nonatomic) double titleLabelMaxWidth;
@property (nonatomic) long long scaleRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForItem:(id)a0;

- (void)didSetAttachingDIContext;
- (void)__setupUIs;
- (void)renderWithItem:(id)a0;
- (void)updateMultiChorusJoinState:(BOOL)a0;
- (void)layoutWithRecommendChorusRoomStyleIfNeed;
- (void)p_didClickedFavoriteButton;
- (void)soloKTVLayout;
- (struct CGSize { double x0; double x1; })scoreLabelsSize;
- (void)recommendChorusInfoView:(id)a0 didClickWithInfo:(id)a1;
- (void)songItemDidChangeTryListenStatusType:(unsigned long long)a0;
- (void)didClickMultiChorus:(BOOL)a0;
- (void)remakeOptimizeUIConstraint;
- (unsigned long long)getMusicRealDuration:(id)a0;
- (void)updateTryListenStatusType:(unsigned long long)a0;
- (void)p_addTryListenIconIfNeeded;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)dealloc;

@end
