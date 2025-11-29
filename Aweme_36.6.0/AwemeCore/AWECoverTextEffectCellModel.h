@class AWECoverTextPackage, NSString, NSArray, IESEffectModel;

@interface AWECoverTextEffectCellModel : MTLModel

@property (nonatomic) long long downloadStatus;
@property (retain, nonatomic) AWECoverTextPackage *textPackage;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *textKey;
@property (copy, nonatomic) NSString *iconName;
@property (copy, nonatomic) IESEffectModel *effectModel;
@property (copy, nonatomic) NSArray *fonts;
@property (nonatomic) double fontScale;
@property (copy, nonatomic) id /* block */ onceDownloadedBlock;

+ (id)createStoryTextCellModelWithEffectModel:(id)a0;
+ (id)createNoneCellModel;
+ (id)createCellModelWithEffectModel:(id)a0 fontEffects:(id)a1;

- (void)startDownloadEffectIfNeeds;
- (id)trackTextIdString;
- (void)startDownloadFontResourceWithTextEffectPath:(id)a0;
- (void)trackStartWithEvent:(id)a0 effectId:(id)a1;
- (void)trackEndWithEvent:(id)a0 effectId:(id)a1 error:(id)a2;
- (void)p_monitorWithKey:(id)a0 effectId:(id)a1 error:(id)a2;
- (BOOL)localResource;
- (void).cxx_destruct;
- (id)init;

@end
