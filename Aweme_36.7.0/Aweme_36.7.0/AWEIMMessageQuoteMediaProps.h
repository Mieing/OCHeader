@class NSArray, NSString, UIImage, AWEURLModel;

@interface AWEIMMessageQuoteMediaProps : AWEIMUIViewPresenterProps

@property (nonatomic) long long type;
@property (nonatomic) struct CGSize { double width; double height; } playIconSize;
@property (nonatomic) double imageCornerRadius;
@property (copy, nonatomic) AWEURLModel *imageUrlModel;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSArray *imageUrls;
@property (copy, nonatomic) id /* block */ tapActionBlock;
@property (copy, nonatomic) NSString *messageID;

- (void).cxx_destruct;

@end
