@class SnsTips, NSString, NSMutableArray, SnsObject, BaseResponse;

@interface SnsPostResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) SnsObject *snsObject;
@property (retain, nonatomic) NSString *spamTips;
@property (retain, nonatomic) SnsTips *snsTips;
@property (nonatomic) unsigned int withTaFailListCount;
@property (retain, nonatomic) NSMutableArray *withTaFailList;

+ (void)initialize;

@end
