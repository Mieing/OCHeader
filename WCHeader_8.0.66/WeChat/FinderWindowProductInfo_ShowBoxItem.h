@class FinderWindowProductInfo_DescWordInfo, FinderWindowProductInfo_GuaranteeInfo, NSData, FinderWindowProductInfo_FriendBuyInfo, FinderWindowProductInfo_ShowBoxPictureInfo, FinderWindowProductInfo_LimitDiscountInfo, FinderWindowProductInfo_DividingLineInfo, FinderWindowProductInfo_RecommandWordInfo, NSString, FinderWindowProductInfo_JumpDescWordInfo, FinderWindowProductInfo_CouponInfo;

@interface FinderWindowProductInfo_ShowBoxItem : WXPBGeneratedMessage

@property (readonly, nonatomic) FinderWindowProductInfo_RecommandWordInfo *recommandWordInfo;
@property (readonly, nonatomic) FinderWindowProductInfo_FriendBuyInfo *friendBuyInfo;
@property (readonly, nonatomic) FinderWindowProductInfo_CouponInfo *couponInfo;
@property (readonly, nonatomic) FinderWindowProductInfo_LimitDiscountInfo *limitDiscountInfo;
@property (readonly, nonatomic) FinderWindowProductInfo_DescWordInfo *descWordInfo;
@property (readonly, nonatomic) FinderWindowProductInfo_GuaranteeInfo *guaranteeInfo;
@property (readonly, nonatomic) FinderWindowProductInfo_ShowBoxPictureInfo *pictureInfo;
@property (readonly, nonatomic) FinderWindowProductInfo_JumpDescWordInfo *jumpDescWordInfo;
@property (readonly, nonatomic) FinderWindowProductInfo_DividingLineInfo *lineInfo;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSData *content;
@property (retain, nonatomic) NSString *extraReportData;

+ (void)initialize;

@end
