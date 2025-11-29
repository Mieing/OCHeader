@class ACCEditBeautyEffectScorageCOWMap;
@protocol ACCEditBeautyEffectScorageRootRecorder;

@interface ACCEditBeautyEffectScorageRoot : NSObject <NSMutableCopying>

@property (retain, nonatomic) ACCEditBeautyEffectScorageCOWMap *scopes;
@property (weak, nonatomic) id<ACCEditBeautyEffectScorageRootRecorder> recorder;

+ (id)dd_dataChangeRecorder;

- (id)modelForKeypath:(id)a0;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)get:(Class)a0;

@end
