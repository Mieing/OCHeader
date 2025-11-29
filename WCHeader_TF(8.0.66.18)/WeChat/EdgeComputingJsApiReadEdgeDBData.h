@class NSMutableDictionary, NSMutableArray, EdgeComputingDBService;

@interface EdgeComputingJsApiReadEdgeDBData : EdgeComputingJsApiBase {
    EdgeComputingDBService *_dBService;
    NSMutableArray *_dbQueryKeyCache;
    NSMutableDictionary *_dbQueryValueCache;
}

- (id)init;
- (BOOL)registerIntoContext:(id)a0;
- (id)logic:(id)a0;
- (id)functionName;
- (unsigned int)getType;
- (void)clear;
- (void).cxx_destruct;

@end
