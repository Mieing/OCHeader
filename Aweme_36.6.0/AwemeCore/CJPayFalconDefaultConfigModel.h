@class NSArray;

@interface CJPayFalconDefaultConfigModel : JSONModel

@property (nonatomic) BOOL enableDefaultConfig;
@property (copy, nonatomic) NSArray *prefixList;
@property (copy, nonatomic) NSArray *channelList;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
