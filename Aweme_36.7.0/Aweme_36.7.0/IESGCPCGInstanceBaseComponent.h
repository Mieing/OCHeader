@protocol IESGCPCGInstance;

@interface IESGCPCGInstanceBaseComponent : IESGCPCGBaseComponent {
    void *_unsafe_instance_pointer;
}

@property (weak, nonatomic) id<IESGCPCGInstance> parentInstance;

- (id)attachedInstance;
- (id)_unsafeInstance;
- (void).cxx_destruct;
- (id)gameModel;

@end
