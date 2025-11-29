@class NSString, NSArray;

@interface CJPayBaseSafeFeature : JSONModel

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSArray *valueList;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL needPersistence;

+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
