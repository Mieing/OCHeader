@class NSString;

@interface AFDSpecialCardService : HTSService <AFDSpecialCardService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cardControllerClassesNeedRegisterWithFeedType:(long long)a0;
- (BOOL)enableSpecialCardRefactor;
- (id)handleSpecialCard:(id)a0 currentDataSource:(id)a1 requestType:(long long)a2;
- (id)getSpecialCardParamsWithDataSource:(id)a0 requestType:(long long)a1;
- (id)cardDuplicateManager;

@end
