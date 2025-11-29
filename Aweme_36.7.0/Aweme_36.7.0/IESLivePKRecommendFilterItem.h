@class NSString;

@interface IESLivePKRecommendFilterItem : NSObject

@property (nonatomic) int type;
@property (copy, nonatomic) NSString *titleText;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL showBottomLine;

- (void).cxx_destruct;

@end
