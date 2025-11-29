@class NSString, AWEProcessIndicatorImageView, AWEPageContext, AWEProgressUIConfig, AWEProgressIndicatorUIConfig;
@protocol AWEProgressContextProtocol;

@interface AWEProcessIndicatorImagePresenter : NSObject <AWEProgressStatusProtocol, AWEProgressChangeProtocol>

@property (retain, nonatomic) AWEPageContext<AWEProgressContextProtocol> *context;
@property (retain, nonatomic) AWEProgressUIConfig *config;
@property (nonatomic) unsigned long long currentStatus;
@property (retain, nonatomic) AWEProgressIndicatorUIConfig *indicatorUIConfig;
@property (nonatomic) double currentPercentage;
@property (readonly, nonatomic) AWEProcessIndicatorImageView *indicatorView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)progressValueChangedTo:(double)a0 animated:(BOOL)a1;
- (void)configIndicatorView;
- (id)formatedStringWithDuration:(long long)a0 shouldShowHours:(BOOL)a1;
- (void)changeProgressStatusTo:(unsigned long long)a0 withAction:(unsigned long long)a1 animate:(BOOL)a2;
- (id)initWithTargeView:(id)a0 UIConfig:(id)a1 context:(id)a2;
- (void).cxx_destruct;

@end
