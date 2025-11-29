@class NewLifeUserEntryRule, BaseResponse;

@interface NewLifeUserPrepareResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned long long finderattrFlag;
@property (retain, nonatomic) NewLifeUserEntryRule *userEntryRule;

+ (void)initialize;

@end
