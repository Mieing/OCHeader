@class CAGradientLayer, NSString, IESECLiveReplayDataStore, UIView;

@interface IESECLiveReplayMaskComponentView : UIView <IESECLiveReplayComponentViewProtocol, IESECLiveReplayGradientProtocol>

@property (nonatomic) double gradientHeight;
@property (retain, nonatomic) CAGradientLayer *topGradientLayer;
@property (retain, nonatomic) CAGradientLayer *bottomGradientLayer;
@property (retain, nonatomic) UIView *bottomBackgroundView;
@property (retain, nonatomic) IESECLiveReplayDataStore *dataStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
