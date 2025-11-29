@class NSString, NSData;

@interface FinderContactExtRelationInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long svrMentionId;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long objectLikeId;
@property (nonatomic) unsigned long long commentId;
@property (retain, nonatomic) NSString *favId;
@property (retain, nonatomic) NSString *fansId;
@property (retain, nonatomic) NSData *mmlistenBypassBuffer;

+ (void)initialize;

@end
