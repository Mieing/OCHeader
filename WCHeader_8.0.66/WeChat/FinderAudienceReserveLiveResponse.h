@class NSMutableArray, BaseResponse;

@interface FinderAudienceReserveLiveResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *failNoticeIdList;
@property (retain, nonatomic) NSMutableArray *succNoticeIdList;
@property (retain, nonatomic) NSMutableArray *succNoticeInfoList;

+ (void)initialize;

@end
