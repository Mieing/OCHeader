@class NSArray, NSMutableArray;

@interface AWETrustAccountContainerView : UIView

@property (copy, nonatomic) NSArray *trustUsers;
@property (retain, nonatomic) NSMutableArray *subTrustViews;
@property (copy, nonatomic) id /* block */ clickLogin;

- (void)stopLoadingWithError:(id)a0;
- (void)startLoadingWithIndex:(unsigned long long)a0;
- (id)initWithTrustUsers:(id)a0 isHalfScreen:(BOOL)a1;
- (void)setupUIWithHalfScreen:(BOOL)a0;
- (void)changeLoginButtonEnable:(BOOL)a0;
- (void).cxx_destruct;

@end
