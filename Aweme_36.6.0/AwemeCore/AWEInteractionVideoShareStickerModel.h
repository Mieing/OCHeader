@class NSString, AWEVideoShareInfoModel;

@interface AWEInteractionVideoShareStickerModel : AWEInteractionStickerModel <AFDForwardContextProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEVideoShareInfoModel *videoShareInfo;
@property (retain, nonatomic) AWEVideoShareInfoModel *postShareInfo;

+ (id)videoShareInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)afd_forwardAwemePopoverText;
- (id)afd_forwardAwemePreFetchAwemeID;
- (id)afd_forwardAwemePopoverJumpSchema:(id)a0;
- (id)afd_forwardAwemePopoverEventParam;
- (BOOL)afd_isShareCommentToStoryScene:(id)a0;
- (id)afd_videoShareFindPreFetchAwemeIfNeeded;
- (id)afd_commonShareToStoryFindPreFetchAwemeIfNeeded;
- (BOOL)afd_hasShareTextWithAweme:(id)a0;
- (void).cxx_destruct;

@end
