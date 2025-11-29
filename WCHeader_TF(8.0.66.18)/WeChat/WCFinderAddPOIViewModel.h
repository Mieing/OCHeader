@class NSString, NSData, NSMutableArray;
@protocol WCFinderAddPOIViewModelDelegate;

@interface WCFinderAddPOIViewModel : NSObject

@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *lastBuffer;
@property (weak, nonatomic) id<WCFinderAddPOIViewModelDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *poiInfoList;
@property (nonatomic) BOOL continueFlag;

- (id)initWithFinderUsername:(id)a0;
- (void)fetchFirstPageData;
- (void)fetchNextPageData;
- (void)fetchDataWithLastBuffer:(id)a0;
- (void).cxx_destruct;

@end
