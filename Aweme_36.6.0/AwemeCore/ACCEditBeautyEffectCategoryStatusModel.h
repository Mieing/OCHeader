@class ACCEditBeautyEffectCategoryModel, NSString;

@interface ACCEditBeautyEffectCategoryStatusModel : NSObject <ACCEditScorageEffectBindable, ACCEditBeautyEffectScorageBizModel>

@property (weak, nonatomic) ACCEditBeautyEffectCategoryModel *bindTo;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
