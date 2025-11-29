@class FinderContact, BaseResponse;

@interface FinderFollowResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderContact *contact;
@property (nonatomic) unsigned int liveStatusFlag;

+ (void)initialize;

@end
