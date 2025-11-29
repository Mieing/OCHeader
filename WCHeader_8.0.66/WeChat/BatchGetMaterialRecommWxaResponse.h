@class NSString, NSMutableArray, BaseResponse;

@interface BatchGetMaterialRecommWxaResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *recommCardList;
@property (retain, nonatomic) NSMutableArray *materialInfoList;
@property (retain, nonatomic) NSString *unstatedWording;

+ (void)initialize;

@end
