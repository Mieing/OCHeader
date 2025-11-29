@class NSString, NSMutableArray;

@interface ExtraBuyInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *selectWording;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *extraBuyDetailInfos;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (void)initialize;

@end
