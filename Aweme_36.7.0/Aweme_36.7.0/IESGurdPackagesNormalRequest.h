@class IESGurdFetchResourcesParams, IESGurdUpdateParams, NSString;

@interface IESGurdPackagesNormalRequest : IESGurdMultiAccessKeysRequest

@property (retain, nonatomic) IESGurdFetchResourcesParams *params;
@property (retain, nonatomic) IESGurdUpdateParams *updateParams;
@property (copy, nonatomic) NSString *tag;

+ (id)requestWithParams:(id)a0 completion:(id /* block */)a1;
+ (id)requestWithUpdateParams:(id)a0 requestType:(long long)a1 completion:(id /* block */)a2;

- (id)logInfo;
- (id)requestMetaDictionary;
- (id)statisticData;
- (void).cxx_destruct;

@end
