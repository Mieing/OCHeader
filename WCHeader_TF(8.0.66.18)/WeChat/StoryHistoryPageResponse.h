@class NSString, NSMutableArray, BaseResponse;

@interface StoryHistoryPageResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *firstPageMd5;
@property (nonatomic) unsigned int historyItemCount;
@property (retain, nonatomic) NSMutableArray *historyItemList;
@property (nonatomic) unsigned int newRequestTime;
@property (nonatomic) unsigned long long limitedId;

+ (void)initialize;

@end
