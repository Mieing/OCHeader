@class IESEffectModel, IESCategoryModel;

@interface LVDraftMigrationTask300VideoEffectModel : NSObject

@property (retain, nonatomic) IESEffectModel *effect;
@property (retain, nonatomic) IESCategoryModel *category;

+ (id)modelWithEffect:(id)a0 category:(id)a1;

- (void).cxx_destruct;

@end
