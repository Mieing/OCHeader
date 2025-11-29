@class NSArray, NSString;

@interface AWEHomepageTopBarContext : NSObject

@property (nonatomic) BOOL isSlidable;
@property (nonatomic) BOOL isVisible;
@property (nonatomic) BOOL isShowCommonBubble;
@property (nonatomic) BOOL isShowCaptionBubble;
@property (nonatomic) BOOL isShowInteractiveAnimation;
@property (copy, nonatomic) NSArray *tabInfos;
@property (copy, nonatomic) NSString *selectedTabID;
@property (copy, nonatomic) NSString *selectedSubTabID;
@property (copy, nonatomic) NSString *currentTabReferString;
@property (nonatomic) double segmentControlMaxXInFeedContentView;
@property (nonatomic) double leftCTAWidth;
@property (nonatomic) double rightCTAWidth;
@property (nonatomic) double tabContainerWidth;
@property (nonatomic) double rightBackIconWidth;
@property (nonatomic) double topRatio;
@property (nonatomic) double topCTARatio;

- (void).cxx_destruct;

@end
