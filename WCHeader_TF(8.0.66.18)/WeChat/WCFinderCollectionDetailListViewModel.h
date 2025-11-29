@class NSString, NSData, NSMutableSet, NSMutableArray, WCFinderGetCollectionListCGI;
@protocol WCFinderCollectionDetailListViewModelDelegate;

@interface WCFinderCollectionDetailListViewModel : NSObject

@property (retain, nonatomic) NSMutableArray *collectionInfoList;
@property (retain, nonatomic) NSMutableSet *collectionIDSet;
@property (nonatomic) BOOL continueFlag;
@property (nonatomic) BOOL dataFetching;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) WCFinderGetCollectionListCGI *cgi;
@property (nonatomic) unsigned int businessType;
@property (retain, nonatomic) NSString *finderUsername;
@property (weak, nonatomic) id<WCFinderCollectionDetailListViewModelDelegate> delegate;

- (id)initWithUsername:(id)a0 lastBuffer:(id)a1;
- (id)initWithUsername:(id)a0 lastBuffer:(id)a1 businessType:(unsigned int)a2;
- (void)_setupState;
- (id)collectionInfoItems;
- (void)fetchData;
- (void)appendCollectionInfos:(id)a0;
- (id)idWithCollection:(id)a0;
- (void)startLoading;
- (void)endLoading;
- (void).cxx_destruct;

@end
