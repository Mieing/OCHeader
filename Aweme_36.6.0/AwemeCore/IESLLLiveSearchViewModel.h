@class NSString, NSDictionary;
@protocol IESLLHttpTask;

@interface IESLLLiveSearchViewModel : NSObject

@property (copy, nonatomic) NSString *aggCardId;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSString *envAddressInfo;
@property (retain, nonatomic) id<IESLLHttpTask> httpTask;
@property (copy, nonatomic) NSDictionary *roomDimensionParams;
@property (copy, nonatomic) NSDictionary *shelfDimensionParams;
@property (copy, nonatomic) NSDictionary *timeDimensionParams;
@property (copy, nonatomic) NSDictionary *commonTrackerParameter;
@property (copy, nonatomic) NSString *searchText;

+ (void)adjustShelfModel:(id)a0 originModel:(id)a1;
+ (void)updateOriginDataWithShelfModel:(id)a0;

- (id)commonParam;
- (void)trackerWithEvent:(id)a0 params:(id)a1;
- (void)setAddressInfoRequestParams:(id)a0;
- (id)createRequestParams;
- (void)cancelDetailRequest;
- (void)setCardListRequestParams:(id)a0;
- (void)fetchListWithTime:(long long)a0 completion:(id /* block */)a1;
- (void)fetchListWithExtraParams:(id)a0 completion:(id /* block */)a1;
- (void)processWithUrlString:(id)a0 time:(long long)a1 params:(id)a2 model:(id)a3 error:(id)a4 completion:(id /* block */)a5;
- (void).cxx_destruct;
- (id)init;

@end
