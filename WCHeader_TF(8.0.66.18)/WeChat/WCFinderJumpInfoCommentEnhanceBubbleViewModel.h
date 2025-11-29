@class NSString, UIColor;

@interface WCFinderJumpInfoCommentEnhanceBubbleViewModel : NSObject

@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSString *linkText;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *descriptionTextColor;
@property (retain, nonatomic) UIColor *linkTextColor;

+ (id)modelWithData:(id)a0;

- (void).cxx_destruct;

@end
