@class NSString, NSData, NSArray;
@protocol WCFinderMemberShipSearchViewModelDelegate;

@interface WCFinderMemberShipSearchViewModel : NSObject

@property (copy, nonatomic) NSString *queryStr;
@property (copy, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *lastBuff;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSArray *results;
@property (weak, nonatomic) id<WCFinderMemberShipSearchViewModelDelegate> delegate;

- (id)initWithFinderUserName:(id)a0;
- (void)requestNextPage;
- (void)search:(id)a0;
- (void).cxx_destruct;

@end
