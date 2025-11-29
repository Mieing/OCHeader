@class Announcement, NSString, NSMutableArray, BaseResponse;

@interface FinderGetLiveIncomePageResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSString *tips;
@property (nonatomic) BOOL isCocertActivate;
@property (retain, nonatomic) Announcement *announcement;
@property (nonatomic) BOOL useStudioNewStyle;

+ (void)initialize;

@end
