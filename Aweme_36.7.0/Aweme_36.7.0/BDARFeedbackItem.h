@class BDARFeedbackModel;

@interface BDARFeedbackItem : NSObject

@property (nonatomic) double height;
@property (nonatomic) unsigned long long countPerRow;
@property (nonatomic) BOOL shouldShowAccessory;
@property (retain, nonatomic) BDARFeedbackModel *model;

- (void).cxx_destruct;

@end
