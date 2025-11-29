@class NSString;

@interface AWEAdReportedButton : UIButton <AWEAdReportedButton>

@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *adValue;
@property (copy, nonatomic) NSString *adLogExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showReportedWebView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
