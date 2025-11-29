@class NSMutableArray, BaseResponse;

@interface FinderClickFeedBackResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned long long feedId;
@property (retain, nonatomic) NSMutableArray *notInterestedWordingList;
@property (retain, nonatomic) NSMutableArray *satisfactionQuestWordingList;

+ (void)initialize;

@end
