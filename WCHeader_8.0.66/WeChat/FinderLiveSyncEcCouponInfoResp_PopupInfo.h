@class NSString, NSMutableArray, FinderJumpInfo;

@interface FinderLiveSyncEcCouponInfoResp_PopupInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *subTitle;
@property (retain, nonatomic) FinderJumpInfo *jumpInfo;
@property (nonatomic) unsigned int businessType;
@property (retain, nonatomic) NSString *valueWording;
@property (retain, nonatomic) NSString *reportJson;

+ (void)initialize;

@end
