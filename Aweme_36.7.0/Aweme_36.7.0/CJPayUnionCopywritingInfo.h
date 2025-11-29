@class NSString;

@interface CJPayUnionCopywritingInfo : JSONModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *displayDesc;
@property (copy, nonatomic) NSString *displayIcon;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
