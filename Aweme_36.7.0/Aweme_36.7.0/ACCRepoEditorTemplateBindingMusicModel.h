@class NSString, NSNumber;

@interface ACCRepoEditorTemplateBindingMusicModel : NSObject <ACCRepoModelDraftProtocol, ACCRepoRegister, NSCopying, ACCRepoInstanceTemplateBindingMusicData>

@property (nonatomic) BOOL excludeMusic;
@property (nonatomic) BOOL hasEffectMusic;
@property (nonatomic) BOOL notRecommendMusic;
@property (copy, nonatomic) NSString *musicId;
@property (nonatomic) double effectMusicVolume;
@property (nonatomic) struct _HTSAudioRange { double location; double length; } clipRange;
@property (retain, nonatomic) NSNumber *enableEffectMusic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)draft_DTOModelClass;
+ (id)repo_dataProtocol;
+ (long long)repo_scope;

- (void)draft_updateWithDTOModel:(id)a0;
- (id)draft_DTOModel;
- (void)clearEffectMusicData;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
