@class NSString;

@interface VEAlgorithmSessionResultScanScript : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } box;
@property (nonatomic) struct CGPoint { double x; double y; } center;
@property (nonatomic) float prob;
@property (nonatomic) BOOL label_is_valid;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *firstLevelLabel;
@property (retain, nonatomic) NSString *secondLevelLabel;
@property (retain, nonatomic) NSString *wikiId;
@property (nonatomic) float track_id;
@property (nonatomic) void *srcImageData;
@property (nonatomic) struct CGSize { double width; double height; } srcSize;

- (void).cxx_destruct;

@end
