@class FinderContact, OriginalEntranceInfo, BaseResponse;

@interface FinderApplyOriginalResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderContact *selfContact;
@property (retain, nonatomic) OriginalEntranceInfo *entranceInfo;

+ (void)initialize;

@end
