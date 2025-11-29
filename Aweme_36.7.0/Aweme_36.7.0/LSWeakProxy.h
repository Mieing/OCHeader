@protocol NSObject;

@interface LSWeakProxy : NSObject

@property (weak, nonatomic) id<NSObject> weakObject;

+ (id)LS_GET_WEAK_ASSOCIATE:(id)a0 withKey:(const void *)a1;

- (void).cxx_destruct;

@end
