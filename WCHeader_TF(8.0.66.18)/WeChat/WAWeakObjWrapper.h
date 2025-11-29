@interface WAWeakObjWrapper : NSObject

@property (weak, nonatomic) id weakObject;

+ (id)wrapperWithWeakObject:(id)a0;

- (id)initWithWeakObject:(id)a0;
- (void).cxx_destruct;

@end
