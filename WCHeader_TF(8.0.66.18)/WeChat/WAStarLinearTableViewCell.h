@class UIView, NSString, MMWebImageView, NSArray, UIImageView, WCTagsView, NSMutableArray, MMUILabel;

@interface WAStarLinearTableViewCell : UITableViewCell <MMWebImageViewDelegate> {
    BOOL _isNeedLogoGray;
    long long _runningState;
    BOOL _isStared;
    BOOL _isBottom;
}

@property (retain, nonatomic) MMWebImageView *headImageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *debugLabel;
@property (retain, nonatomic) MMUILabel *stateLabel;
@property (retain, nonatomic) UIImageView *staredView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) WCTagsView *tagsView;
@property (nonatomic) unsigned int stateFlag;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *arrMenuItems;
@property (retain, nonatomic) NSArray *tagsArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initHeadImageView;
- (void)initTitleLabel;
- (void)initTagsView;
- (void)initDebugLabel;
- (void)initStaredLogoView;
- (void)initStateLabel;
- (void)initLineView;
- (void)layoutSubviews;
- (void)setTagsArrayWithTagParams:(id)a0;
- (void)makeStateNormal;
- (void)makeStateStopService;
- (void)makeStateBanned;
- (void)markStaredAnimated:(BOOL)a0;
- (void)markUnStaredAnimated:(BOOL)a0;
- (void)markBottom;
- (void)markUnBottom;
- (void)onLoadImageOK:(id)a0;
- (void).cxx_destruct;

@end
