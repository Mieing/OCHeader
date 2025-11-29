@class UIImage;

@interface IESLiveAnchorPFEntryItem : NSObject

@property (nonatomic) unsigned long long itemType;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;

- (void).cxx_destruct;

@end
