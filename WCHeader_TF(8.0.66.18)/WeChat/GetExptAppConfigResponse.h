@class NSString, NSMutableArray, BaseResponse;

@interface GetExptAppConfigResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int currSvrSecond;
@property (nonatomic) unsigned int intervalSecond;
@property (nonatomic) unsigned int flag;
@property (retain, nonatomic) NSMutableArray *deleteExptList;
@property (retain, nonatomic) NSMutableArray *replaceExptList;
@property (nonatomic) unsigned int needLocalExpt;
@property (retain, nonatomic) NSString *globalSequence;

+ (void)initialize;

@end
