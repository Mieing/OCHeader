@class NSString, FinderPaidCollectionInfo, WCFinderPaidCollectionFeedListProvider;

@interface WCFinderPaidCollectionDetailVM : NSObject

@property (retain, nonatomic) FinderPaidCollectionInfo *paidCollection;
@property (nonatomic) BOOL isHalfScreen;
@property (retain, nonatomic) WCFinderPaidCollectionFeedListProvider *collectionDataProvider;
@property (copy, nonatomic) NSString *authorFinderUsername;

- (id)initWithPaidCollection:(id)a0 isHalfScreen:(BOOL)a1;
- (void)resetDataProvider;
- (id)dataSnapshot;
- (void)refreshPaidInfo;
- (id)forwardMessage;
- (id)momentItem;
- (id)_shareItem;
- (id)_uploadTask;
- (id)reportParams;
- (int)_reportCommentScene;
- (void).cxx_destruct;

@end
