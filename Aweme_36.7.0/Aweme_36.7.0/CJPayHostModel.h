@class NSString, NSArray;

@interface CJPayHostModel : JSONModel

@property (copy, nonatomic) NSString *bdHostDomain;
@property (copy, nonatomic) NSArray *h5PathList;
@property (copy, nonatomic) NSString *integratedHostDomain;
@property (copy, nonatomic) NSString *anomalyDetectHostDomain;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
