@class GetRecommendFeedsResp_RecommendCardMsg_RecommendItemMsg_ItemMsg_VideoMsg, NSString, GetRecommendFeedsResp_RecommendCardMsg_RecommendItemMsg_ItemMsg_VoiceMsg, GetRecommendFeedsResp_RecommendCardMsg_RecommendItemMsg_ItemMsg_PictureMsg;

@interface GetRecommendFeedsResp_RecommendCardMsg_RecommendItemMsg_ItemMsg : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *digest;
@property (retain, nonatomic) NSString *contentUrl;
@property (retain, nonatomic) NSString *coverImgUrl;
@property (retain, nonatomic) NSString *coverImgUrl11;
@property (retain, nonatomic) NSString *coverImgUrl2351;
@property (nonatomic) unsigned int itemShowType;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) GetRecommendFeedsResp_RecommendCardMsg_RecommendItemMsg_ItemMsg_VideoMsg *videoInfo;
@property (retain, nonatomic) GetRecommendFeedsResp_RecommendCardMsg_RecommendItemMsg_ItemMsg_VoiceMsg *voiceInfo;
@property (retain, nonatomic) GetRecommendFeedsResp_RecommendCardMsg_RecommendItemMsg_ItemMsg_PictureMsg *pictureInfo;

+ (void)initialize;

@end
