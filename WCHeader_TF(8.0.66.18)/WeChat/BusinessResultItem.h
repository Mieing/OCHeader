@class BusinessProductItem, BusinessContactItem, BusinessCommonItem;

@interface BusinessResultItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) BusinessContactItem *contactItem;
@property (retain, nonatomic) BusinessCommonItem *commonItem;
@property (nonatomic) unsigned long long docId;
@property (retain, nonatomic) BusinessProductItem *productItem;

+ (void)initialize;

@end
