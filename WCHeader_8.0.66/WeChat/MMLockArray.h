@class NSMutableArray, NSObject;

@interface MMLockArray : NSObject {
    NSObject *_lock;
    NSMutableArray *_realArray;
}

- (id)init;
- (void)addObject:(id)a0;
- (void)remove:(id)a0;
- (id)objects;
- (void).cxx_destruct;

@end
