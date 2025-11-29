@interface BDASControlTargetAction : NSObject {
    id _target;
}

@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;
@property (readonly, nonatomic) BOOL createdWithNoTarget;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
