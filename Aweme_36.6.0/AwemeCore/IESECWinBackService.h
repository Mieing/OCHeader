@class NSString, IESECServiceProxy, NSDictionary, UIView, NSArray, IESECWinContext;
@protocol IESECWinDataService, IESECWinLiveService;

@interface IESECWinBackService : NSObject <IESECWinBackService> {
    NSDictionary *_colorMapper;
    NSArray *_defaultLinearGradient;
}

@property (retain, nonatomic) IESECServiceProxy<IESECWinDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinLiveService> *liveService;
@property (weak, nonatomic) IESECWinContext *context;
@property (copy, nonatomic) NSString *coverColor;
@property (copy, nonatomic) NSString *navBarColor;
@property (weak, nonatomic) UIView *bgView;
@property (nonatomic) BOOL useBackImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)screenShotView:(id)a0;
- (id)calculateHeaderBackViewGradient:(double)a0;
- (BOOL)getHue:(double *)a0 saturation:(double *)a1 lightness:(double *)a2 alpha:(double *)a3 color:(id)a4;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)colorWithHue:(double)a0 saturation:(double)a1 lightness:(double)a2 alpha:(double)a3;

@end
