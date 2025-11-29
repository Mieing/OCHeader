@class NSString;

@interface ACCBasicTrackParamsGetterImpl : ACCUseCase <ACCBasicTrackParamsGetter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)enterFrom;
- (id)creationId;
- (id)shootWay;
- (id)mixType;
- (id)shootEnterFrom;
- (id)fromGroupId;
- (id)shootEnterMethod;
- (id)creationSessionId;
- (id)lastGroupId;
- (id)coreBasicParams;
- (id)enterEditMethod;
- (BOOL)isMultiContent;
- (id)isMultiContentValue;
- (long long)videoCnt;
- (id)videoCntValue;
- (long long)picCnt;
- (id)picCntValue;
- (id)p_contentTypeMap;
- (id)p_recordButtonTypeTrackInfoMap;
- (id)contentSource;
- (id)contentType;

@end
