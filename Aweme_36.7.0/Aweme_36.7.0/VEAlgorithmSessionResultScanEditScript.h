@class NSString, UIImage;

@interface VEAlgorithmSessionResultScanEditScript : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } box;
@property (nonatomic) float prob;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *firstLevelLabel;
@property (retain, nonatomic) NSString *secondLevelLabel;
@property (retain, nonatomic) NSString *wikiId;
@property (retain, nonatomic) UIImage *srcImage;
@property (nonatomic) struct CGSize { double width; double height; } srcSize;

- (void).cxx_destruct;

@end
