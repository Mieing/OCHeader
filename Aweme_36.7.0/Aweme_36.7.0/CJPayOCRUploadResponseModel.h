@class NSDictionary, NSString;

@interface CJPayOCRUploadResponseModel : JSONModel

@property (nonatomic) long long httpCode;
@property (copy, nonatomic) NSDictionary *header;
@property (copy, nonatomic) NSString *response;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
