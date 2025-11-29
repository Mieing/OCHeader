@class NSArray;

@interface AWECommentPanelHeaderConfigModel : NSObject

@property (nonatomic) BOOL isApplyCustomAnchorList;
@property (copy, nonatomic) NSArray *customAnchorNameList;
@property (nonatomic) BOOL isFilterCommentCountComponent;
@property (copy, nonatomic) NSArray *filterHeaderButtonTypes;
@property (nonatomic) BOOL forceShowFullScreenBtn;

- (void).cxx_destruct;

@end
