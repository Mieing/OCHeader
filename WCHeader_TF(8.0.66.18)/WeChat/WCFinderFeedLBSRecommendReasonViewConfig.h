@class UIColor;

@interface WCFinderFeedLBSRecommendReasonViewConfig : NSObject

@property (nonatomic) double fontSize;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) BOOL haveSplit;
@property (nonatomic) unsigned long long lineLimit;
@property (nonatomic) BOOL forceUnbold;

+ (id)titleConfig;
+ (id)summaryConfig;

- (void).cxx_destruct;

@end
