@class NSString;
@protocol WCFinderStreamProfileBlankModelDelegate;

@interface WCFinderStreamProfileBlankModel : WCFinderStreamProfilePageModel

@property (nonatomic) long long blankType;
@property (retain, nonatomic) NSString *displayTips;
@property (copy, nonatomic) id /* block */ tipsClickBlock;
@property (weak, nonatomic) id<WCFinderStreamProfileBlankModelDelegate> delegate;

- (id)displayName;
- (id)viewPageClassName;
- (void)reset;
- (void)_reset:(id /* block */)a0;
- (void)showNoMoreType;
- (void)showTipsType:(id)a0 retryBlock:(id /* block */)a1;
- (void)showLodingType;
- (void)showStoppedType;
- (void).cxx_destruct;

@end
