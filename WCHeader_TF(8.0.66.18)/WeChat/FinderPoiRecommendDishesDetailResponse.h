@class NSString, FinderJumpInfo, NSMutableArray, BaseResponse;

@interface FinderPoiRecommendDishesDetailResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *dishesDetailList;
@property (retain, nonatomic) FinderJumpInfo *pageFooterJumpinfo;

+ (void)initialize;

@end
