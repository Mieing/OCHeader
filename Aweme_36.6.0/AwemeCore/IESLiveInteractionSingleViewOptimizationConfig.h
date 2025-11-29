@interface IESLiveInteractionSingleViewOptimizationConfig : NSObject

@property (readonly, nonatomic) unsigned long long scene;
@property (readonly, nonatomic) long long UILayout;
@property (readonly, nonatomic) long long slotsCount;

+ (id)configWithScene:(unsigned long long)a0;
+ (id)configWithScene:(unsigned long long)a0 UILayout:(long long)a1 slotsCount:(long long)a2;
+ (id)configWithScene:(unsigned long long)a0 UILayout:(long long)a1;

- (id)initWithScene:(unsigned long long)a0 UILayout:(long long)a1 slotsCount:(long long)a2;
- (id)initWithScene:(unsigned long long)a0 UILayout:(long long)a1;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
