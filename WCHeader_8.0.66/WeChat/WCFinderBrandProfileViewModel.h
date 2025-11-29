@class NSString, NSDictionary, NSMutableSet, NSData, NSMutableArray, FinderBizInfo_BizInfo;
@protocol WCFinderBrandProfileViewModelDelegate;

@interface WCFinderBrandProfileViewModel : NSObject <WCFinderUserPageFetchExt>

@property (copy, nonatomic) NSString *bizUsername;
@property (retain, nonatomic) NSDictionary *jumpInfoDict;
@property (retain, nonatomic) NSMutableArray *dataArray;
@property (retain, nonatomic) NSMutableSet *containedTidSet;
@property (nonatomic) unsigned long long state;
@property (nonatomic) BOOL isRequestingData;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL continueFlag;
@property (retain, nonatomic) FinderBizInfo_BizInfo *bizInfo;
@property (nonatomic) unsigned long long refreshTime;
@property (weak, nonatomic) id<WCFinderBrandProfileViewModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBizUsername:(id)a0 bizInfo:(id)a1 brandFinderJumpInfo:(id)a2 dataArray:(id)a3 lastBuffer:(id)a4 continueFlag:(BOOL)a5;
- (unsigned long long)numberOfItem;
- (id)contentVMAtIndex:(long long)a0;
- (long long)contentIndexOfTid:(id)a0;
- (id)contentVMWithTid:(id)a0;
- (void)requestDataFromTop;
- (void)requestNextData;
- (void)requestDataWithPullType:(unsigned long long)a0;
- (void)updateState;
- (id)tranformDataItemArray:(id)a0;
- (void)addContainedTid:(id)a0;
- (id)filterDataArray:(id)a0;
- (void)onFinderUserPageFetchSuccess:(id)a0;
- (void)onFinderUserPageFetchFail:(int)a0;
- (void).cxx_destruct;

@end
