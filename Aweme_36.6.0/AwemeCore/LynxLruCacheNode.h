@protocol NSCopying;

@interface LynxLruCacheNode : NSObject <NSCoding>

@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) id<NSCopying> key;
@property (retain, nonatomic) LynxLruCacheNode *next;
@property (retain, nonatomic) LynxLruCacheNode *prev;

+ (id)nodeWithValue:(id)a0 key:(id)a1;

- (id)initWithValue:(id)a0 key:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
