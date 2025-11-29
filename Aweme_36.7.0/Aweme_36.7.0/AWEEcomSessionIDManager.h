@class NSString, UIViewController;

@interface AWEEcomSessionIDManager : NSObject

@property (copy, nonatomic) NSString *searchSessionID;
@property (weak, nonatomic) UIViewController *firstSearchVC;
@property (nonatomic) BOOL sessionIDDidUpdate;

+ (id)sharedInstance;

- (void)onlyUpdateSessionID;
- (BOOL)shouldUpdateSessionID;
- (void)updateSessionID;
- (void)updateSessionIDWithSearchVC:(id)a0;
- (void).cxx_destruct;

@end
