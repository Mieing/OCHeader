@class NSString, NSMutableArray, BaseResponse;

@interface GetMaterialRecommWxaCardResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *recentlyUsedCardList;
@property (retain, nonatomic) NSMutableArray *recommCardList;
@property (retain, nonatomic) NSString *mimeType;

+ (void)initialize;

@end
