@class NSMutableArray;

@interface MMIotDeviceExtInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *supportAbilityList;
@property (nonatomic) unsigned int productTypeId;

+ (void)initialize;

- (void)setProductTypeId:(unsigned int)a0;
- (unsigned int)productTypeId;
- (void)setSupportAbilityList:(id)a0;
- (id)supportAbilityList;

@end
