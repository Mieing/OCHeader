@class WCTDatabase;

@interface EdgeComputingWCDBManager : MMObject {
    WCTDatabase *edgeDatabase;
}

- (id)init:(id)a0;
- (void)dealloc;
- (void)close;
- (BOOL)execuSQL:(id)a0;
- (id)querySQL:(id)a0;
- (unsigned long long)queryRowNum:(id)a0;
- (void).cxx_destruct;

@end
