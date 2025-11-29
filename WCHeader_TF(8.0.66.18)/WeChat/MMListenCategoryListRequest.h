@class MMListenRecommendInfo, BaseRequest, NSString, NSData, MMListenMusicBaseRequest, MMListenChatRoomRequest;

@interface MMListenCategoryListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long cliSeq;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (retain, nonatomic) MMListenRecommendInfo *ctxRecommendInfo;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *categoryId;
@property (retain, nonatomic) MMListenMusicBaseRequest *musicBaseRequest;
@property (retain, nonatomic) MMListenChatRoomRequest *chatRoomRequest;

+ (void)initialize;

@end
