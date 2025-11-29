@class NSString, UIImage, AWENearbyFeedbackItemDetail;

@interface AWENearbyFeedbackItem : NSObject

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) AWENearbyFeedbackItemDetail *detailItem;

- (id)initWithTitle:(id)a0 iconImage:(id)a1 detail:(id)a2;
- (void).cxx_destruct;

@end
