@class NSString, NSArray, AWEDTONewCoverMobParams, AWEDTOCoverClipParams;

@interface AWEDTONleCoverEditDraftModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *draftFilePath;
@property (copy, nonatomic) NSString *draftCoverTemplateResFilePath;
@property (copy, nonatomic) NSString *draftCoverTemplateFilePath;
@property (copy, nonatomic) NSString *draftCoverTemplateId;
@property (copy, nonatomic) NSString *editCoverPath;
@property (copy, nonatomic) NSString *videoCoverSource;
@property (retain, nonatomic) AWEDTOCoverClipParams *coverClipParams;
@property (copy, nonatomic) NSArray *textStickerReview;
@property (copy, nonatomic) NSArray *draftNleMobLayers;
@property (nonatomic) BOOL hasShowedForceDialog;
@property (retain, nonatomic) AWEDTONewCoverMobParams *reserved_kw_newCoverMobParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverClipParamsJSONTransformer;
+ (id)draftNleMobLayersJSONTransformer;
+ (id)reserved_kw_newCoverMobParamsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
