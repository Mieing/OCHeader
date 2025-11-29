@class LocalSearchDict, NetworkDict, BaseResponse;

@interface LocalSearchDictResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) LocalSearchDict *dict;
@property (retain, nonatomic) NetworkDict *networkDict;
@property (nonatomic) unsigned int timevalSec;
@property (nonatomic) unsigned int secondBoxHeight;

+ (void)initialize;

@end
