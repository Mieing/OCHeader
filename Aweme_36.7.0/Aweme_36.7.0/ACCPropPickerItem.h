@class IESEffectModel;

@interface ACCPropPickerItem : NSObject <NSCopying>

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long categoryType;
@property (retain, nonatomic) IESEffectModel *effect;

- (id)initWithType:(unsigned long long)a0 effect:(id)a1;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
