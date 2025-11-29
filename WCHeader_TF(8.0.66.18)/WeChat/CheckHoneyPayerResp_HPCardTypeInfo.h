@class NSString, HPCardOperItem;

@interface CheckHoneyPayerResp_HPCardTypeInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *cardTypeName;
@property (retain, nonatomic) NSString *tips;
@property (retain, nonatomic) NSString *icon;
@property (nonatomic) BOOL isGray;
@property (nonatomic) unsigned int cardType;
@property (retain, nonatomic) HPCardOperItem *operItem;

+ (void)initialize;

@end
