@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderDelMentionRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned long long mentionId;
@property (retain, nonatomic) NSData *mentionLastBuff;
@property (nonatomic) unsigned long long refObjectId;
@property (nonatomic) unsigned long long refCommentId;
@property (nonatomic) unsigned int mentionType;
@property (nonatomic) unsigned long long svrMentionId;

+ (void)initialize;

@end
