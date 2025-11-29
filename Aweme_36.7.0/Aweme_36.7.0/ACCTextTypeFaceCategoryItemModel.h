@class AWEStoryColor, IESEffectModel;

@interface ACCTextTypeFaceCategoryItemModel : NSObject

@property (nonatomic) long long type;
@property (nonatomic) unsigned long long textStyle;
@property (nonatomic) long long alignmentType;
@property (retain, nonatomic) AWEStoryColor *fontColor;
@property (retain, nonatomic) IESEffectModel *effect;
@property (nonatomic) BOOL isDefault;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) unsigned long long index;

- (BOOL)isDefaultStyle;
- (void).cxx_destruct;
- (unsigned long long)templateType;
- (id)templateName;

@end
