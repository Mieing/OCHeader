@class NSLock, NSMutableDictionary;

@interface SECRouteRecord : NSObject {
    NSLock *_recordLock;
}

@property (retain, nonatomic) NSMutableDictionary *records;

- (id)contextForRouter:(id)a0 withKey:(id)a1;
- (void)updateContext:(id)a0 forRouter:(id)a1 withKey:(id)a2;
- (void)clearRecordForRouter:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
