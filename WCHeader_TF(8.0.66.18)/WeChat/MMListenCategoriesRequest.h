@class MMListenRecommendInfo, BaseRequest, NSString, NSData, MMListenAudioBaseRequest, MMListenMusicBaseRequest;

@interface MMListenCategoriesRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) int sortType;
@property (retain, nonatomic) NSString *categoryId;
@property (nonatomic) int categoryOffset;
@property (nonatomic) int categoryCount;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (nonatomic) BOOL isPreload;
@property (retain, nonatomic) MMListenRecommendInfo *ctxRecommendInfo;
@property (retain, nonatomic) MMListenAudioBaseRequest *audioBaseRequest;
@property (retain, nonatomic) MMListenMusicBaseRequest *musicBaseRequest;

+ (void)initialize;

@end
