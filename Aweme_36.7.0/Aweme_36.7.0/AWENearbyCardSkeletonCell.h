@class UIStackView, NSString, AWECommonFeedSectionContext, UIView;
@protocol AWECommonFeedCellModelProtocol;

@interface AWENearbyCardSkeletonCell : UICollectionViewCell <AWECommonFeedCellProtocol>

@property (retain, nonatomic) UIView *skeletonView;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIView *avatarView;
@property (retain, nonatomic) UIView *nicknameView;
@property (retain, nonatomic) UIView *userInfoOne;
@property (retain, nonatomic) UIView *userInfoTwo;
@property (retain, nonatomic) UIView *followView;
@property (retain, nonatomic) UIView *mediaView;
@property (retain, nonatomic) UIView *footerView;
@property (retain, nonatomic) UIStackView *interactionView;
@property (retain, nonatomic) UIView *textView;
@property (retain, nonatomic) UIView *commentView;
@property (retain, nonatomic) id<AWECommonFeedCellModelProtocol> cellModel;
@property (retain, nonatomic) AWECommonFeedSectionContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configCellWithContext:(id)a0 cellModel:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)hasVideo;
- (void)setupUI;

@end
