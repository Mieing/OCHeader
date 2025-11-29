@class NSString, NSMutableDictionary, UIGestureRecognizer;

@interface AWEHPSlideGestureMonitorModel : NSObject

@property (copy, nonatomic) NSString *scene;
@property (weak, nonatomic) UIGestureRecognizer *gesture;
@property (copy, nonatomic) NSString *lastNonRespondReason;
@property (nonatomic) unsigned long long nonRespondCount;
@property (retain, nonatomic) NSMutableDictionary *verifyFailedReasons;
@property (nonatomic) unsigned long long actionFailedCount;

- (void).cxx_destruct;

@end
