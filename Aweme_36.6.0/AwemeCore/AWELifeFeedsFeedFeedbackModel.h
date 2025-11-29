@class NSString, NSNumber, NSDictionary;

@interface AWELifeFeedsFeedFeedbackModel : NSObject

@property (copy, nonatomic) NSString *cardId;
@property (copy, nonatomic) NSNumber *cardType;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } feedbackFrame;
@property (copy, nonatomic) NSDictionary *feedbackData;

- (void).cxx_destruct;

@end
