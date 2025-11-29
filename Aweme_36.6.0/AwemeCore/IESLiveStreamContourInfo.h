@class UIBezierPath, NSString, NSArray;

@interface IESLiveStreamContourInfo : NSObject

@property (nonatomic) double validTiming;
@property (retain, nonatomic) UIBezierPath *contourPath;
@property (copy, nonatomic) NSString *interactID;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (copy, nonatomic) NSArray *contourItems;
@property (nonatomic) struct CGPoint { double x; double y; } scalePoint;
@property (nonatomic) struct CGPoint { double x; double y; } offsetPoint;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } drawBounds;
@property (nonatomic) struct CGSize { double width; double height; } cameraSize;
@property (nonatomic) long long version;

- (void).cxx_destruct;

@end
