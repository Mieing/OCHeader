@class FinderPersonalMsgContact, BaseResponse;

@interface FinderEnterPersonalMsgResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderPersonalMsgContact *personalMsgContact;
@property (nonatomic) unsigned int refreshInterval;

+ (void)initialize;

@end
