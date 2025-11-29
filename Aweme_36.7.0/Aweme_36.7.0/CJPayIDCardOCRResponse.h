@class NSString, NSArray;
@protocol IDPhotoOcrInfo;

@interface CJPayIDCardOCRResponse : CJPayBaseResponse

@property (copy, nonatomic) NSString *flowNo;
@property (copy, nonatomic) NSString *idName;
@property (copy, nonatomic) NSString *idCode;
@property (copy, nonatomic) NSArray<IDPhotoOcrInfo> *idPhotoInfos;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
