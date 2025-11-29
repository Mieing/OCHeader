@class NSNumber;

@interface LynxUIListScrollThresholds : NSObject

@property (retain, nonatomic) NSNumber *scrollToStartOffset;
@property (retain, nonatomic) NSNumber *scrollToEndOffset;
@property (retain, nonatomic) NSNumber *scrollToStartItemCount;
@property (retain, nonatomic) NSNumber *scrollToEndItemCount;
@property (nonatomic) NSNumber *throttle;

- (void).cxx_destruct;

@end
