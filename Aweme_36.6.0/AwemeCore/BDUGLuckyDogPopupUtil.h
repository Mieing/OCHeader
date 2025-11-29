@interface BDUGLuckyDogPopupUtil : NSObject

@property (copy, nonatomic) id /* block */ alertHandler;

+ (id)getGlobalBlockListOfType:(long long)a0;
+ (void)alert:(id)a0;
+ (BOOL)enableFeedbackBypass;
+ (id)sharedInstance;

- (void).cxx_destruct;

@end
