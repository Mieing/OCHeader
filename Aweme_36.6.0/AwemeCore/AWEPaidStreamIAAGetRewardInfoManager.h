@class NSString, NSDictionary, AWEPaidAuthConfig, NSMutableArray;

@interface AWEPaidStreamIAAGetRewardInfoManager : NSObject <AWEPaidStreamIAAGetRewardInfoManagerProtocol>

@property (retain, nonatomic) AWEPaidAuthConfig *authConfig;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) NSMutableArray *awardConfigInfos;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) BOOL hasMoreRewardInfos;
@property (nonatomic) long long currentCursor;
@property (nonatomic) long long currentIndex;
@property (copy, nonatomic) NSDictionary *contextParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAuthConfig:(id)a0;
- (void)initialRequestRewardConfigInfosCompletion:(id /* block */)a0;
- (void)updateAuthItem:(id)a0 withPaidStreamIAAAwardADConfig:(id)a1;
- (void)requestMoreRewardConfigInfos;
- (void)monitorWithEventName:(id)a0 parameters:(id)a1;
- (void)requestRewardConfigInfosWithType:(unsigned long long)a0 startIndex:(long long)a1 completion:(id /* block */)a2;
- (BOOL)shouldLoadMoreRewardConfigInfos;
- (id)authItemForPaidStreamIAAAwardConfigModel:(id)a0;
- (id)getRewardConfigInfoAtIndex:(long long)a0;
- (unsigned long long)cachedRewardConfigInfosCount;
- (void).cxx_destruct;

@end
