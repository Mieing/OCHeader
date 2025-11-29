@class NSString, NSDictionary, NSArray;

@interface CJPayPrefetchRequestModel : JSONModel

@property (copy, nonatomic) NSString *api;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSString *dataType;
@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSDictionary *dataFields;
@property (copy, nonatomic) NSArray *hosts;
@property (copy, nonatomic) NSArray *dataToJSONKeyPaths;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
