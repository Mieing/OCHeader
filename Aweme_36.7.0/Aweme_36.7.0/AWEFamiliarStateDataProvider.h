@class NSString;

@interface AWEFamiliarStateDataProvider : AWESocialRelationDataProvider <AWEUserMessage, AWEFamiliarStateDataProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)interceptor_readFromFile:(id)a0 completion:(id /* block */)a1;
- (id)interceptor_readFromMemory:(id)a0;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (id)readFromMemory:(id)a0;
- (void)readFromFile:(id)a0 completion:(id /* block */)a1;
- (long long)familiarConfidence:(id)a0 scene:(id)a1;
- (long long)familiarConfidenceForUserID:(id)a0 scene:(id)a1;
- (long long)socialRealRelationType:(id)a0 scene:(id)a1;
- (void)updateWithProfileUser:(id)a0;
- (long long)socialRealRelationTypeForUserID:(id)a0 scene:(id)a1;
- (id)p_responseFromModels:(id)a0 request:(id)a1;
- (id)init;
- (id)identifier;
- (void)dealloc;

@end
