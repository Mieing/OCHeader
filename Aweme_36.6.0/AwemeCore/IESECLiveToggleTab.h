@class IESECLiveToggleModel, NSMutableArray, UIView;
@protocol IESECLiveToggleTabDelegate;

@interface IESECLiveToggleTab : UIView

@property (retain, nonatomic) NSMutableArray *toggleTabElements;
@property (retain, nonatomic) UIView *sliderView;
@property (nonatomic) BOOL isSliding;
@property (retain, nonatomic) IESECLiveToggleModel *toggleModel;
@property (weak, nonatomic) id<IESECLiveToggleTabDelegate> delegate;

- (void)scrollDidScrollToPercent:(double)a0;
- (id)initWithToggleModel:(id)a0;
- (void)clickToggleTabElement:(id)a0;
- (void).cxx_destruct;
- (void)setIndex:(long long)a0;
- (void)setupUI;

@end
