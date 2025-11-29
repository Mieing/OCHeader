@class UINotificationFeedbackGenerator, UISelectionFeedbackGenerator;

@interface ACCTapticEngineManager : NSObject

@property (retain, nonatomic) UISelectionFeedbackGenerator *selectionFeedback;
@property (retain, nonatomic) UINotificationFeedbackGenerator *notificationFeedback;

+ (void)notifySuccess;
+ (void)notifyFailure;
+ (void)notifyWarning;
+ (id)sharedManager;
+ (void)tap;

- (void).cxx_destruct;

@end
