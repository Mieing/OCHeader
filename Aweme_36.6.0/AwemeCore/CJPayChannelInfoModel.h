@class NSString;

@interface CJPayChannelInfoModel : JSONModel

@property (copy, nonatomic) NSString *channelData;
@property (copy, nonatomic) NSString *payType;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
