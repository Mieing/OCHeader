@class NSString, AWEStorage;

@interface AWEStoragePreloadNode : NSObject

@property (retain, nonatomic) AWEStorage *storage;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *valueClass;

- (id)initWithStorage:(id)a0 key:(id)a1 valueClass:(id)a2;
- (void).cxx_destruct;

@end
