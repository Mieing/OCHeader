@class NSNumber;

@interface CJPayRestoreConfig : JSONModel

@property (nonatomic) BOOL disableRestore;
@property (copy, nonatomic) NSNumber *defaultRestoreExpireDuration;
@property (copy, nonatomic) NSNumber *restoreTerminateThreshold;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
