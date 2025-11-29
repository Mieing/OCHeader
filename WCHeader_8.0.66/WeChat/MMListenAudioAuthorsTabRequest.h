@class MMListenRecommendInfo, BaseRequest, NSData, MMListenAudioBaseRequest, NSMutableArray;

@interface MMListenAudioAuthorsTabRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSMutableArray *bizUsernames;
@property (retain, nonatomic) NSMutableArray *finderUsernames;
@property (nonatomic) BOOL isPreload;
@property (retain, nonatomic) MMListenRecommendInfo *ctxRecommendInfo;
@property (retain, nonatomic) MMListenAudioBaseRequest *audioBaseRequest;

+ (void)initialize;

@end
