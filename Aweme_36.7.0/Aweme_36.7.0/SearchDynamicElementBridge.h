@class NSMapTable;

@interface SearchDynamicElementBridge : NSObject

@property (retain, nonatomic) NSMapTable *searchDynamicElementTable;
@property (retain, nonatomic) NSMapTable *searchDynamicContainerTable;

+ (id)shareInstance;

- (void)registElementView:(id)a0 withSessionID:(id)a1;
- (void)registContainer:(id)a0 withSessionID:(id)a1;
- (id)containerWithSessionID:(id)a0;
- (id)elementWithSessionID:(id)a0;
- (void).cxx_destruct;

@end
