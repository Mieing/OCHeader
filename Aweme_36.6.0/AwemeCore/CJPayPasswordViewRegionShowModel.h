@class NSString;

@interface CJPayPasswordViewRegionShowModel : JSONModel

@property (copy, nonatomic) NSString *enableChangePayType;
@property (copy, nonatomic) NSString *showSubPayTypeDescRegion;
@property (copy, nonatomic) NSString *showTopLeftBubbleViewRegion;
@property (copy, nonatomic) NSString *forgetPwdButtonRegion;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
