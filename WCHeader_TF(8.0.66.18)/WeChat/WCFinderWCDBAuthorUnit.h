@class WCTTable;

@interface WCFinderWCDBAuthorUnit : NSObject

@property (retain, nonatomic) WCTTable *blackListTable;
@property (retain, nonatomic) WCTTable *fansTable;
@property (retain, nonatomic) WCTTable *finderAuthorMentionTable;
@property (retain, nonatomic) WCTTable *authorFeedLikeList;
@property (retain, nonatomic) WCTTable *authorFeedFavList;

- (void).cxx_destruct;

@end
