@interface MMWeakValue : NSObject

@property (weak, nonatomic) id nonretainedObjectValue;

+ (id)valueWithNonretainedObject:(id)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
