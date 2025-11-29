@class UIView, NSString, HTSLiveCommonCardArea;
@protocol IESLiveDynamicService;

@interface IESLiveTopRightAirView : UIView <IESLiveDynamicViewDelegate>

@property (retain, nonatomic) HTSLiveCommonCardArea *cardArea;
@property (nonatomic) double cardWidth;
@property (retain, nonatomic) UIView *airView;
@property (retain, nonatomic) id<IESLiveDynamicService> dynamicService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerLocalMethod:(id)a0;
- (id)initWithCardArea:(id)a0 diContext:(id)a1;
- (void)updateCardArea:(id)a0;
- (void).cxx_destruct;
- (void)setup;
- (id)businessIdentifier;

@end
