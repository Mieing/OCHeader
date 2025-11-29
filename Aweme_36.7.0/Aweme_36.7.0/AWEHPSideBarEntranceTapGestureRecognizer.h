@protocol AWEHPSideBarEntranceTapGestureRecognizerDelegate;

@interface AWEHPSideBarEntranceTapGestureRecognizer : UITapGestureRecognizer

@property (weak, nonatomic) id<AWEHPSideBarEntranceTapGestureRecognizerDelegate> touchDelegate;

- (void).cxx_destruct;
- (void)setState:(long long)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
