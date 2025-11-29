@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface DecoderCache : NSObject <NSCopying, NSMutableCopying>

@property (retain) NSMutableDictionary *decoderMap;
@property int currentId;
@property (retain) NSObject<OS_dispatch_queue> *syncQueue;

+ (id)instance;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (int)generateId;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
