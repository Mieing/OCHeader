@class NSString, FinderPaidCollectionInfo, UIViewController;
@protocol WCFinderCollectionFeedListProvider, WCFinderCollectionFeedListViewControllerDelegate;

@interface WCFinderPaidCollectionInfoJumpParams : NSObject

@property (retain, nonatomic) FinderPaidCollectionInfo *paidCollection;
@property (weak, nonatomic) UIViewController *fromVC;
@property (copy, nonatomic) NSString *sourceFeedID;
@property (retain, nonatomic) id<WCFinderCollectionFeedListProvider> dataProvider;
@property (nonatomic) BOOL showHalfDetailVC;
@property (copy, nonatomic) NSString *authorFinderUsername;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) unsigned long long jumpType;
@property (copy, nonatomic) NSString *targetFeedID;
@property (nonatomic) BOOL autoStartPurchase;
@property (weak, nonatomic) id<WCFinderCollectionFeedListViewControllerDelegate> feedListDelegate;
@property (nonatomic) int commentScene;
@property (nonatomic) BOOL isSelfCollection;
@property (nonatomic) BOOL authorJumpDetail;
@property (nonatomic) BOOL feedItemAuthorScene;
@property (nonatomic) unsigned long long shareScene;

+ (id)paramsWithPaidCollection:(id)a0 fromVC:(id)a1;

- (void).cxx_destruct;

@end
