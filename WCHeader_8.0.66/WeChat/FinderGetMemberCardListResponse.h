@class NSData, NSMutableArray, BaseResponse;

@interface FinderGetMemberCardListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *memberCards;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;

+ (void)initialize;

@end
