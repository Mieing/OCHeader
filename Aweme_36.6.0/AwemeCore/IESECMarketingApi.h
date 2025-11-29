@class NSString;

@interface IESECMarketingApi : NSObject <IESECMarketingApi>

@property (nonatomic) BOOL openWithSaaS;
@property (copy, nonatomic) NSString *baseURLString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)initWithOpenWithSaaS:(BOOL)a0;
- (id)request:(id)a0 apiPath:(id)a1 postMethod:(BOOL)a2 headers:(id)a3 parameters:(id)a4 modelClass:(Class)a5 callback:(id /* block */)a6;
- (void)fetchMarketingUserActionRulesWithParams:(id)a0 headers:(id)a1 callback:(id /* block */)a2;
- (id)request:(id)a0 apiPath:(id)a1 postMethod:(BOOL)a2 parameters:(id)a3 modelClass:(Class)a4 callback:(id /* block */)a5;
- (id)request:(id)a0 postMethod:(BOOL)a1 parameters:(id)a2 modelClass:(Class)a3 callback:(id /* block */)a4;
- (void).cxx_destruct;
- (id)init;

@end
