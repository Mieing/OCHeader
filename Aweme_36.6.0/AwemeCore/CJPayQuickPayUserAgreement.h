@class NSString;

@interface CJPayQuickPayUserAgreement : JSONModel

@property (copy, nonatomic) NSString *contentURL;
@property (nonatomic) BOOL defaultChoose;
@property (copy, nonatomic) NSString *title;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
