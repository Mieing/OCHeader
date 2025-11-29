@class NSString, AWEFollowListPageContext;

@interface AWEFansListFansAnalysisViewConfig : NSObject

@property (nonatomic) long long frameMode;
@property (copy, nonatomic) NSString *schema;
@property (weak, nonatomic) AWEFollowListPageContext *pageContext;
@property (copy, nonatomic) id /* block */ lynxViewSizeChanged;

- (void).cxx_destruct;

@end
