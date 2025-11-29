@class NSString;

@interface CJPayDoubleConfirmPageInfo : JSONModel

@property (copy, nonatomic) NSString *style;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *bodyDesc;
@property (copy, nonatomic) NSString *leftButtonDesc;
@property (copy, nonatomic) NSString *rightButtonDesc;
@property (copy, nonatomic) NSString *iconUrl;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
