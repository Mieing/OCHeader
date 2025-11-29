@class NSString, AWEPageContext, UIView;

@interface AWEFollowNoticeContext : NSObject

@property (nonatomic) long long unreadCount;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *ruleId;
@property (copy, nonatomic) NSString *showedUserIDs;
@property (copy, nonatomic) NSString *gdLabel;
@property (readonly, nonatomic) UIView *unreadBubble;
@property (copy, nonatomic) NSString *topNoticeIDs;
@property (nonatomic) BOOL shouldUseOptimizedBgprimary;
@property (nonatomic) BOOL hasNavBar;
@property (nonatomic) BOOL isFirstLoaded;
@property (retain, nonatomic) AWEPageContext *pageContext;

- (void).cxx_destruct;

@end
