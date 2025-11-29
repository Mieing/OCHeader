@class NSString;

@interface IESLiveGoldenMicLabelViewConfig : NSObject

@property (nonatomic) double distanceFromIconToLeft;
@property (nonatomic) double distanceFromIconToTop;
@property (nonatomic) double distanceFromLabelToIcon;
@property (nonatomic) double distanceFromLabelToTop;
@property (nonatomic) double fontSize;
@property (nonatomic) long long goldenMicCount;
@property (nonatomic) long long silverMicCount;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (copy, nonatomic) NSString *bgColor;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) BOOL orderSingV3;

- (void).cxx_destruct;

@end
