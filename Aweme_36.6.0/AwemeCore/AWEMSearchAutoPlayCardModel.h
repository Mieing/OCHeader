@class NSDictionary, NSString;
@protocol AWEMSearchAutoPlayCardModelDelegate;

@interface AWEMSearchAutoPlayCardModel : NSObject <AWEMSearchAutoPlayCard> {
    BOOL _isActive;
}

@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) id /* block */ canBecomeActiveBlock;
@property (copy, nonatomic) id /* block */ becomeActiveBlock;
@property (copy, nonatomic) id /* block */ resignActiveBlock;
@property (copy, nonatomic) id /* block */ didEndShowingBlock;
@property (copy, nonatomic) id /* block */ getActiveViewBlock;
@property (weak, nonatomic) id<AWEMSearchAutoPlayCardModelDelegate> delegate;
@property (readonly, nonatomic) BOOL needPlayFinish;
@property (readonly, nonatomic) double playInterval;
@property (copy, nonatomic) id /* block */ playDidFinishBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didEndShowing;
- (void)markAsDeactive;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (void)didResignActive;
- (BOOL)isEqual:(id)a0;
- (BOOL)isActive;
- (id)activeView;
- (BOOL)canBecomeActive;

@end
