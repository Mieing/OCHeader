@interface IESGurdPollingRequest : IESGurdMultiAccessKeysRequest

- (id)logInfo;
- (id)requestMetaDictionary;
- (id)paramsForRequest;
- (BOOL)isParamsValid;
- (id)statisticData;
- (id)timer;
- (void)setTimer:(id)a0;
- (id)description;
- (id)init;

@end
