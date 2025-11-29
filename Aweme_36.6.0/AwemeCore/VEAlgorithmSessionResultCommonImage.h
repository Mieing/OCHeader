@class NSArray, NSString;

@interface VEAlgorithmSessionResultCommonImage : VEAlgorithmSessionResult

@property (retain, nonatomic) NSArray *commonImageInfo;
@property (nonatomic) BOOL mattingIsValid;
@property (retain, nonatomic) NSString *mattingOutputPath;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mattingBox;
@property (retain, nonatomic) NSArray *reframeBoxs;

- (void).cxx_destruct;
- (id)init;

@end
