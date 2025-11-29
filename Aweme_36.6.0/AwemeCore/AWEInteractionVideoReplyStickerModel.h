@class ACCVideoReplyModel;

@interface AWEInteractionVideoReplyStickerModel : AWEInteractionStickerModel

@property (retain, nonatomic) ACCVideoReplyModel *videoReplyUserInfo;

+ (id)videoReplyUserInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
