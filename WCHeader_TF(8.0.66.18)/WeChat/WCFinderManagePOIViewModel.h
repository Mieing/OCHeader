@class NSString, NSData, NSMutableArray;
@protocol WCFinderManagePOIViewModelDelegate;

@interface WCFinderManagePOIViewModel : NSObject

@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *auditingLastBuffer;
@property (retain, nonatomic) NSData *bindingLastBuffer;
@property (weak, nonatomic) id<WCFinderManagePOIViewModelDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *auditingPOIInfoList;
@property (retain, nonatomic) NSMutableArray *bindingPOIInfoList;
@property (nonatomic) BOOL auditingContinueFlag;
@property (nonatomic) BOOL bindingContinueFlag;

- (id)initWithFinderUsername:(id)a0;
- (long long)numberOfSections;
- (long long)numberOfRowsInSection:(long long)a0;
- (id)poiInfoForRowAtIndexPath:(id)a0;
- (double)heightForRowAtIndexPath:(id)a0;
- (id)titleForHeaderInSection:(long long)a0;
- (void)fetchRelativePOIListWithSuccessBlock:(id /* block */)a0 failureBlock:(id /* block */)a1;
- (void)bindPOIWithIds:(id)a0;
- (void)appendAuditingPOI:(id)a0;
- (void)unbindPOIWithId:(id)a0;
- (void)fetchFirstAuditingPageData;
- (void)fetchNextAuditingPageData;
- (void)fetchAuditingDataWithLastBuffer:(id)a0;
- (void)fetchFirstBindingPageData;
- (void)fetchNextBindingPageData;
- (void)fetchBindingDataWithLastBuffer:(id)a0;
- (void).cxx_destruct;

@end
