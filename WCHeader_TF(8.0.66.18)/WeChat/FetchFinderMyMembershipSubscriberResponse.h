@class NSData, NSMutableArray, BaseResponse;

@interface FetchFinderMyMembershipSubscriberResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *fansList;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSData *lastBuff;

+ (void)initialize;

@end
