@class FinderWindowProductInfo, NSString, BaseResponse;

@interface FinderGetShareProductInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderWindowProductInfo *productInfo;
@property (nonatomic) unsigned int isProductInLivingRoom;
@property (nonatomic) unsigned int isLiving;
@property (retain, nonatomic) NSString *tagUrl;
@property (retain, nonatomic) NSString *shopLogoUrl;
@property (retain, nonatomic) NSString *livingFinderUsername;

+ (void)initialize;

@end
