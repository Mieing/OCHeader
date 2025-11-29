@class MMListenRecommendInfo, BaseRequest, NSString, NSData, MMListenMusicBaseRequest, MMListenAudioBaseRequest;

@interface MMListenCategoryFeedRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) MMListenMusicBaseRequest *musicBaseRequest;
@property (retain, nonatomic) MMListenAudioBaseRequest *audioBaseRequest;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (retain, nonatomic) NSString *listenId;
@property (retain, nonatomic) NSString *categoryId;
@property (retain, nonatomic) MMListenRecommendInfo *ctxRecommendInfo;
@property (nonatomic) unsigned int recommendScene;

+ (void)initialize;

@end
