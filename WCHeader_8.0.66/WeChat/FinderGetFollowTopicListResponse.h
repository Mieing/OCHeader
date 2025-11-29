@class NSData, NSMutableArray, BaseResponse;

@interface FinderGetFollowTopicListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *topics;
@property (nonatomic) unsigned int topicCount;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;

+ (void)initialize;

@end
