@class NSMutableArray, BaseResponse;

@interface GetExptResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int currSvrSecond;
@property (nonatomic) unsigned int intervalSecond;
@property (retain, nonatomic) NSMutableArray *deleteExptList;
@property (retain, nonatomic) NSMutableArray *replaceExptList;
@property (nonatomic) unsigned int exptFlag;
@property (retain, nonatomic) NSMutableArray *items;

+ (void)initialize;

@end
