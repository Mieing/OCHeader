@class NSObject;

@interface MMLiveWeakObject : NSObject

@property (weak, nonatomic) NSObject *object;
@property (nonatomic) unsigned int timestamp;

- (id)initWithObject:(id)a0;
- (void).cxx_destruct;

@end
