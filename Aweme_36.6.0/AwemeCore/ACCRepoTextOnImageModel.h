@class NSString, AWETextOnImagePublishInfo, NSArray, IESEffectModel;

@interface ACCRepoTextOnImageModel : NSObject <ACCRepoRegister, ACCRepoModelDraftProtocol, NSCopying, ACCRepoTextOnImageData>

@property (copy, nonatomic) NSString *parentEffectId;
@property (copy, nonatomic) NSString *effectId;
@property (copy, nonatomic) NSString *effectSource;
@property (copy, nonatomic) NSString *prepareEffectId;
@property (copy, nonatomic) NSString *textStickerDataString;
@property (nonatomic) BOOL addedForRecord;
@property (retain, nonatomic) AWETextOnImagePublishInfo *stickerInfo;
@property (retain, nonatomic) IESEffectModel *parentEffectModel;
@property (retain, nonatomic) IESEffectModel *textStickerEffect;
@property (retain, nonatomic) NSArray *fontModelArray;
@property (nonatomic) struct CGPoint { double x; double y; } anchorPoint;
@property (nonatomic) struct CGSize { double width; double height; } previewOutputSize;
@property (nonatomic) BOOL isFromRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)draft_DTOModelClass;
+ (id)repo_dataProtocol;

- (void)draft_updateWithDTOModel:(id)a0;
- (id)draft_DTOModel;
- (void)syncDataFromModel:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
