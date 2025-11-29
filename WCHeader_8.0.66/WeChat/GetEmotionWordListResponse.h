@class NSMutableArray, BaseResponse;

@interface GetEmotionWordListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *personalWords;
@property (nonatomic) unsigned int personalWordsType;
@property (nonatomic) unsigned long long personalWordsVersion;

+ (void)initialize;

@end
