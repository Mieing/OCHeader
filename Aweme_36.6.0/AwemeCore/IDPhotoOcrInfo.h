@class NSString;

@interface IDPhotoOcrInfo : JSONModel

@property (copy, nonatomic) NSString *flowNo;
@property (copy, nonatomic) NSString *idPhotoType;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
