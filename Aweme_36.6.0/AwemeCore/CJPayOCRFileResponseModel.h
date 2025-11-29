@class NSString, NSArray;
@protocol CJPayOCRFileResponseInnerModel;

@interface CJPayOCRFileResponseModel : JSONModel

@property (copy, nonatomic) NSString *mediaType;
@property (copy, nonatomic) NSString *size;
@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *metaFile;
@property (copy, nonatomic) NSString *metaFilePrefix;
@property (copy, nonatomic) NSArray<CJPayOCRFileResponseInnerModel> *files;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
