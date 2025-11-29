@class UIImageView, UILabel, IESLiveGameSpecifyRatioSegmentedControl;

@interface IESLiveGameSpecifyRatioView : UIView

@property (readonly, nonatomic) unsigned long long categoryOrientation;
@property (readonly, nonatomic) unsigned long long displayOrientation;
@property (nonatomic) unsigned long long selectedDisplayOrientation;
@property (nonatomic) unsigned long long specifyRatioType;
@property (retain, nonatomic) UIImageView *displayImageView;
@property (retain, nonatomic) UILabel *displayTips;
@property (retain, nonatomic) IESLiveGameSpecifyRatioSegmentedControl *ratioSegmentedControl;
@property (copy, nonatomic) id /* block */ didConfirmHandler;

- (id)initWithGameCategoryOrientation:(unsigned long long)a0 gameDisplayOrientation:(unsigned long long)a1 gameSpecifyRatioType:(unsigned long long)a2;
- (id)constructGameDisplayOrientationItems;
- (unsigned long long)calculateGameDisplayOrientationInitialIndex;
- (void)didSelectedGameDisplayOrientationItem:(id)a0;
- (long long)calculateGameSpecifyRatioInitialIndexWithItems:(id)a0;
- (BOOL)selectGameSpecifyRatioEnable;
- (void)didSelectedGameSpecifyRatioSegmentedItem:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
