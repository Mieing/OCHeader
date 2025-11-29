@class NSString;

@interface IESLiveRevenueLinkParsedSEIModel : NSObject

@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *focusUid;
@property (nonatomic) long long layoutType;
@property (nonatomic) long long scaleType;
@property (nonatomic) long long alignMode;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentRatioFrame;
@property (nonatomic) double distance;
@property (nonatomic) BOOL isHorizontal;

- (void).cxx_destruct;

@end
