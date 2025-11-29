@class NSString, ACCVideoReplyCommentModel;

@interface AWEInteractionVideoCommentStickerModel : AWEInteractionStickerModel

@property (retain, nonatomic) ACCVideoReplyCommentModel *commentModel;
@property (copy, nonatomic) NSString *stickerConfig;

+ (id)commentModelJSONTransformer;
+ (id)convertFromReplyCommentModel:(id)a0;
+ (id)convertFromCommentModel:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)nativeSticker;
- (void).cxx_destruct;

@end
