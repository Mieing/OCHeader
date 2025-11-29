@class NSNumber;

@interface CJPayFKMLocationReportConfig : JSONModel

@property (copy, nonatomic) NSNumber *reportLocationTimeout;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
