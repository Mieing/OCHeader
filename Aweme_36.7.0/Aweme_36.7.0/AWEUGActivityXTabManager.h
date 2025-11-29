@class NSPointerArray;

@interface AWEUGActivityXTabManager : NSObject

@property (retain, nonatomic) NSPointerArray *weakContainers;

+ (id)sharedManager;

- (BOOL)isActivityTabShowing;
- (void)addViewController:(id)a0;
- (id)xTabSchemas;
- (BOOL)showingXTabDisableClientShake;
- (void).cxx_destruct;

@end
