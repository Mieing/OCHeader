@protocol AWESpecialCardLandingProcessDelegate;

@interface AWESpecialCardLandingManager : NSObject

@property (weak, nonatomic) id<AWESpecialCardLandingProcessDelegate> dispatchController;
@property (nonatomic) BOOL isLanding;

+ (id)sharedManager;

- (void)tryInsertCardWithParams:(id)a0;
- (void).cxx_destruct;

@end
