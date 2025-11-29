@class NSString;

@interface ExtraBuyDetailInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long extraBuyId;
@property (retain, nonatomic) NSString *extraBuyName;
@property (nonatomic) unsigned long long goodOriginalPrice;
@property (nonatomic) unsigned long long goodAddPrice;
@property (retain, nonatomic) NSString *extraBuyGoodName;
@property (retain, nonatomic) NSString *extraBuyGoodPic;
@property (nonatomic) unsigned int unavailable;
@property (retain, nonatomic) NSString *unavailableReason;
@property (nonatomic) BOOL selected;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (void)initialize;

@end
