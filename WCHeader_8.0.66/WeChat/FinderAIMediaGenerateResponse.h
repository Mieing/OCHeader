@class NSString, BaseResponse;

@interface FinderAIMediaGenerateResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *generateKey;
@property (nonatomic) unsigned int queryInterval;
@property (nonatomic) unsigned int queryMaxTimes;

+ (void)initialize;

@end
