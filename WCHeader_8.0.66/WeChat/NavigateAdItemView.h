@class NSString, NSDictionary, UIView;
@protocol NavigateAdDelegate;

@interface NavigateAdItemView : UIView

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *iconUrlForDark;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) UIView *adTipsPop;
@property (weak, nonatomic) id<NavigateAdDelegate> delegateEx;
@property (retain, nonatomic) NSDictionary *reportParams;
@property (weak, nonatomic) id<NavigateAdDelegate> delegate;

- (id)initWithTitle:(id)a0 iconUrl:(id)a1 iconUrlForDark:(id)a2 desc:(id)a3 reportParams:(id)a4;
- (void)initView;
- (void)closeAd;
- (void)showTipsPop;
- (void).cxx_destruct;

@end
