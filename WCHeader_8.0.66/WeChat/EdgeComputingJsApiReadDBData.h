@class EdgeComputingDBService;

@interface EdgeComputingJsApiReadDBData : EdgeComputingJsApiBase {
    EdgeComputingDBService *_dBService;
}

- (BOOL)registerIntoContext:(id)a0;
- (id)logic:(id)a0;
- (id)functionName;
- (unsigned int)getType;
- (void)clear;
- (void).cxx_destruct;

@end
