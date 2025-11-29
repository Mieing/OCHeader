@class NSString, UIView, NSObject, MMUILabel;

@interface WCTBaseSettingView : UIView <WCTSettingViewProtocol>

@property (weak, nonatomic) UIView *cell;
@property (retain, nonatomic) NSObject *viewDataModel;
@property (readonly, nonatomic) MMUILabel *titleLabel;
@property (copy, nonatomic) id /* block */ viewEventAction;
@property (weak, nonatomic) id viewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeightByDataModel:(id)a0 hostView:(id)a1;

@end
