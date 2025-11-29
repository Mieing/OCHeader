@class NSArray, NSAttributedString;

@interface HTSLiveAnimationRocket : HTSLiveAnimation

@property (retain, nonatomic) NSAttributedString *title;
@property (copy, nonatomic) NSArray *backgroundUrlList;
@property (nonatomic) float width;
@property (nonatomic) float height;
@property (nonatomic) BOOL showArrowIndicator;
@property (retain, nonatomic) NSArray *flexSetting;

- (void).cxx_destruct;

@end
