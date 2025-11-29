@class NSString;

@interface AWELivePreStreamLiveCardSectionConfig : NSObject

@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) double headerHeight;
@property (nonatomic) double footerHeight;
@property (nonatomic) double cellHeight;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } sectionInsets;
@property (nonatomic) long long cardType;
@property (copy, nonatomic) NSString *enterMethod;

- (void).cxx_destruct;

@end
