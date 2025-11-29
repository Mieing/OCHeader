@class NSString, UIImage, AWEIMDefaultFloatViewTracker;
@protocol AWEIMDefaultFloatViewLayer;

@interface AWEIMDefaultFloatViewModel : NSObject

@property (readonly, nonatomic) long long priority;
@property (readonly, nonatomic) long long type;
@property (copy, nonatomic) NSString *icon;
@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *additionTitle;
@property (copy, nonatomic) NSString *buttonTitle;
@property (nonatomic) BOOL needCloseButton;
@property (nonatomic) BOOL needRoundIcon;
@property (readonly, nonatomic) AWEIMDefaultFloatViewTracker *tracker;
@property (nonatomic) BOOL allRegionEnableTap;
@property (weak, nonatomic) id<AWEIMDefaultFloatViewLayer> viewLayer;

- (id)initWithTitle:(id)a0 priority:(long long)a1 icon:(id)a2 buttonTitle:(id)a3 needCloseButton:(BOOL)a4 tracker:(id)a5;
- (void)viewDidLayoutSubview;
- (void).cxx_destruct;

@end
