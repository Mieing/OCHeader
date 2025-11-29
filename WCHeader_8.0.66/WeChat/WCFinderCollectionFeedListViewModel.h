@class WCFinderFeedArray, WCFinderCollectionHalfViewParams;
@protocol WCFinderCollectionFeedListProvider;

@interface WCFinderCollectionFeedListViewModel : NSObject

@property (retain, nonatomic) WCFinderCollectionHalfViewParams *params;
@property (retain, nonatomic) id<WCFinderCollectionFeedListProvider> provider;
@property (readonly, nonatomic) WCFinderFeedArray *feedArray;

+ (id)viewModelWithParams:(id)a0 provider:(id)a1;

- (id)dataSnapshot;
- (id)sectionSnapshot;
- (void)replaceProvider:(id)a0;
- (void).cxx_destruct;

@end
