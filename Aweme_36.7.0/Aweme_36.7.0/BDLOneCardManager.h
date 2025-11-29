@class NSMutableDictionary;

@interface BDLOneCardManager : NSObject

@property (class, readonly) BDLOneCardManager *sharedInstance;

@property (retain) NSMutableDictionary *mappingVerifyURL;

- (id)getVerifyURL:(id)a0;
- (BOOL)mapVerifyURL:(id)a0 withSourceID:(id)a1;
- (void)fetchOneCardBundle:(id)a0 completion:(id /* block */)a1;
- (void)downloadOneCardBundle:(id)a0 completion:(id /* block */)a1;
- (void)preloadWithSchmea:(id)a0 customID:(id)a1 callback:(id /* block */)a2;
- (void)preloadWithSchemaList:(id)a0 customID:(id)a1 callback:(id /* block */)a2;
- (void)preloadWithSchmea:(id)a0 callback:(id /* block */)a1;
- (void)preloadWithSchemaList:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
