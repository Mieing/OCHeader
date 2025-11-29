@class UIImpactFeedbackGenerator;

@interface AWEFeedProgressFeedBackHelper : NSObject

@property (retain, nonatomic) UIImpactFeedbackGenerator *generator;

+ (id)shared;

- (void)generateFeedback;
- (BOOL)shouldUseMainThread;
- (void).cxx_destruct;
- (id)init;
- (void)prepareFeedback;

@end
