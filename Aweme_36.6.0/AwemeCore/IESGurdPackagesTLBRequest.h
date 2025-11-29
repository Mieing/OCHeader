@interface IESGurdPackagesTLBRequest : IESGurdMultiAccessKeysRequest {
    long long _requestType;
}

- (id)logInfo;
- (id)requestMetaDictionary;
- (BOOL)isParamsValid;
- (id)statisticData;
- (void)setRequestType:(long long)a0;
- (id)init;
- (long long)requestType;

@end
