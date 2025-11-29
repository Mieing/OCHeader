@class AWEArchContainerViewAroundLock;

@interface AWEArchProtector : NSObject

@property (retain, nonatomic) AWEArchContainerViewAroundLock *lock;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) id directValue;

- (id)write:(id /* block */)a0;
- (void).cxx_destruct;
- (id)read:(id /* block */)a0;
- (id)initWithValue:(id)a0;

@end
