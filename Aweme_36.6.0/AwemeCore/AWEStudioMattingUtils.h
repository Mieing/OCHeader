@class IESEffectModel;

@interface AWEStudioMattingUtils : NSObject

@property (class, retain, nonatomic) IESEffectModel *effectModel;

+ (unsigned long long)convertMattingType:(id)a0;
+ (BOOL)currentEffectModelNeedMatting:(id)a0 atIndex:(long long)a1;
+ (id)checkPathHasExistAndDeleteOld:(id)a0;

@end
