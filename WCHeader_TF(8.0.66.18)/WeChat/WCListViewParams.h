@class WCMomentsPageContext;

@interface WCListViewParams : NSObject

@property (retain, nonatomic) WCMomentsPageContext *pageContext;
@property (nonatomic) BOOL bHideBackgroundCover;
@property (nonatomic) BOOL isStarBrowsingEnabled;
@property (nonatomic) long long puzzleImageViewLayoutStyle;

- (void).cxx_destruct;

@end
