@class NSData, NSMutableArray, WCFinderContact;
@protocol WCFinderBlackListViewModelDelegate;

@interface WCFinderBlackListViewModel : NSObject

@property (retain, nonatomic) WCFinderContact *contact;
@property (retain, nonatomic) NSMutableArray *contactArray;
@property (nonatomic) BOOL hasMoreContact;
@property (retain, nonatomic) NSData *lastBuffer;
@property (weak, nonatomic) id<WCFinderBlackListViewModelDelegate> delegate;

- (id)initWithContact:(id)a0;
- (void)fetchLocalData;
- (void)fetchMoreData;
- (void)revertBlackContact:(id)a0 success:(id /* block */)a1 failure:(id /* block */)a2;
- (void).cxx_destruct;

@end
