@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderGetMentionListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int mentionType;
@property (retain, nonatomic) NSData *lastBuff;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned int requestScene;
@property (nonatomic) unsigned int fetchScene;
@property (nonatomic) unsigned long long aggregatedRootMentionId;
@property (retain, nonatomic) NSString *wxUsername;
@property (nonatomic) unsigned int fetchMode;
@property (retain, nonatomic) NSData *pageBuffer;

+ (void)initialize;

@end
