@class UILabel, IESECActionLoadingView, NSString;

@interface IESECMallRecommendViewLoadingView : UIView <IESECMallLoadingViewProtocol>

@property (retain, nonatomic) IESECActionLoadingView *loadingView;
@property (retain, nonatomic) UILabel *title;
@property (nonatomic) BOOL isBlack;
@property (nonatomic) BOOL canShowMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
