@class ACCEditBeautyEffectItemModel, NSString;

@interface ACCEditBeautyEffectItemStatusModel : NSObject <ACCEditScorageEffectBindable, ACCEditBeautyEffectScorageBizModel>

@property (weak, nonatomic) ACCEditBeautyEffectItemModel *bindTo;
@property (nonatomic) long long value;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (nonatomic, getter=isApplied) BOOL applied;
@property (nonatomic, getter=isBranchAvailable) BOOL branchAvailable;
@property (nonatomic) long long downloadStatus;
@property (nonatomic, getter=isAvailable) BOOL available;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
