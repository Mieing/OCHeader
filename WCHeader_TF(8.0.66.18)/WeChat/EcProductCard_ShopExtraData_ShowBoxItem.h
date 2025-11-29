@class NSData, NSString;

@interface EcProductCard_ShopExtraData_ShowBoxItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int showBoxItemType;
@property (retain, nonatomic) NSData *showBoxItem;
@property (nonatomic) unsigned int showBoxElementContextType;
@property (retain, nonatomic) NSString *showBoxItemJson;

+ (void)initialize;

@end
