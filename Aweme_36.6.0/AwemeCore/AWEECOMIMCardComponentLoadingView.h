@class NSString, UILabel, AWEECOMIMIndicatorView, UIView;

@interface AWEECOMIMCardComponentLoadingView : UIView <AWEECOMIMCardComponentLoadingViewProtocol, BDECRabbiFlyILoadingView>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWEECOMIMIndicatorView *indicatorView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
