@class NSString;

@interface IESGCPHTTPClient_Douyin : NSObject <IESGCPHTTPClient>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)requestWithParamsModel:(id)a0;
- (id)handleError:(id)a0 withResponseObj:(id)a1;
- (id)requestIdForResponseObj:(id)a0;
- (id)logIDForResponseObj:(id)a0;
- (id)createAweRequestWithRequestModel:(id)a0;
- (id)getGameCPHTTPTask:(id)a0;
- (id)methodStringWithMethod:(long long)a0;
- (id)dictionaryFromResponseHeader:(id)a0;
- (id)headerByTint:(id)a0;

@end
