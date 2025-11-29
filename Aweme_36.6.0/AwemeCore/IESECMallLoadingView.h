@class UIImageView, NSString, UIView;
@protocol IESECUILoadingViewProtocol;

@interface IESECMallLoadingView : UIView <IESECMallLoadingViewProtocol>

@property (retain, nonatomic) UIView<IESECUILoadingViewProtocol> *loadingView;
@property (retain, nonatomic) UIImageView *logoImageView;
@property (nonatomic) BOOL canShowMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
