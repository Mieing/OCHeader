@class IESECMallDeepFeedRecReasonView;

@interface IESECMallDeepFeedRecReasonMultiView : UIView

@property (retain, nonatomic) IESECMallDeepFeedRecReasonView *firstRecReason;
@property (retain, nonatomic) IESECMallDeepFeedRecReasonView *secondRecReason;
@property (nonatomic) double totalWidth;

- (id)updateWithRecReasons:(id)a0 width:(double)a1;
- (void).cxx_destruct;

@end
