@interface IESGurdAutoRequest : IESGurdMultiAccessKeysRequest

- (id)logInfo;
- (id)requestMetaDictionary;
- (id)paramsForRequest;
- (BOOL)isParamsValid;
- (id)statisticData;
- (id)init;

@end
