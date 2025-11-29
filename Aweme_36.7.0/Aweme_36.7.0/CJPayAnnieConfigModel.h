@class NSArray;

@interface CJPayAnnieConfigModel : JSONModel

@property (nonatomic) BOOL forceEnableAllAnnieXCard;
@property (nonatomic) BOOL enableAnnieXCard;
@property (copy, nonatomic) NSArray *allowUrlList;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
