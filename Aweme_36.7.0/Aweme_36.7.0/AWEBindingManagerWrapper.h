@class AWEBindingManager;

@interface AWEBindingManagerWrapper : NSObject

@property (retain, nonatomic) AWEBindingManager *manager;
@property (nonatomic) id unsafeObject;

- (void).cxx_destruct;
- (void)dealloc;

@end
