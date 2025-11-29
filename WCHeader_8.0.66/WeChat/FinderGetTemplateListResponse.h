@class NSData, NSMutableArray, BaseResponse;

@interface FinderGetTemplateListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *topicList;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (nonatomic) unsigned long long totalCount;

+ (void)initialize;

@end
