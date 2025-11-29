@class UIView, NSString, NSArray, MMWebImageView, UIImage, WAHomeTableViewCellDescView, WCTagsView, MMUILabel;

@interface WAHomeTableViewCell : MMMultiMenuTableViewCell <ZZFlexibleLayoutViewProtocol, MMWebImageViewDelegate> {
    BOOL _isNeedLogoGray;
    long long _runningState;
    BOOL _isStared;
    BOOL _isBottom;
    UIImage *_defaultHeaderImage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) MMWebImageView *headImageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *debugLabel;
@property (retain, nonatomic) MMUILabel *stateLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) WCTagsView *tagsView;
@property (retain, nonatomic) WAHomeTableViewCellDescView *descView;
@property (nonatomic) unsigned int stateFlag;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *openDesc;
@property (retain, nonatomic) NSArray *tagsArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeightByDataModel:(id)a0;

- (void)setViewDataModel:(id)a0;
- (void)onViewPositionUpdatedWithIndexPath:(id)a0 sectionItemCount:(long long)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initHeadImageView;
- (void)initTitleLabel;
- (void)initTagsView;
- (void)initDebugLabel;
- (void)initStaredLogoView;
- (void)initStateLabel;
- (void)initLineView;
- (void)initDescView;
- (void)layoutSubviews;
- (void)makeStateNormal;
- (void)makeStateStopService;
- (void)makeStateBanned;
- (void)markStaredAnimated:(BOOL)a0;
- (void)markUnStaredAnimated:(BOOL)a0;
- (void)markBottom;
- (void)markUnBottom;
- (void)hideMenuOptionsAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)onLoadImageOK:(id)a0;
- (void).cxx_destruct;

@end
