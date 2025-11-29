@class FinderUserPageResponse, NSMutableSet, NSMutableArray, WCFinderContact;

@interface WCFinderUserPageFillInFetcherData : NSObject

@property (retain, nonatomic) FinderUserPageResponse *resp;
@property (retain, nonatomic) WCFinderContact *contact;
@property (retain, nonatomic) NSMutableArray *dataItems;
@property (retain, nonatomic) NSMutableSet *ids;

- (void).cxx_destruct;

@end
