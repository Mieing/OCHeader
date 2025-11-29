@class NSString, NSMutableArray;

@interface FinderShopShelfLabelClassifyInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *labelName;
@property (retain, nonatomic) NSMutableArray *productIds;
@property (nonatomic) unsigned long long categoryId;
@property (retain, nonatomic) NSString *iconUrl;
@property (nonatomic) int labelType;

+ (void)initialize;

@end
