@protocol NSCopying;

@interface TMNetworkContentDetectPathItem : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) id<NSCopying> key;
@property (nonatomic) unsigned long long index;

- (void).cxx_destruct;
- (id)initWithIndex:(unsigned long long)a0;
- (id)initWithKey:(id)a0;

@end
