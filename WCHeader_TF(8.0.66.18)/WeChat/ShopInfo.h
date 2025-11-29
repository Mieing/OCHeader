@class NSString, DetailLink, NSMutableArray;

@interface ShopInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *platformName;
@property (retain, nonatomic) NSString *platformHeadImg;
@property (retain, nonatomic) NSString *shopName;
@property (retain, nonatomic) NSString *shopHeadImg;
@property (retain, nonatomic) DetailLink *shopWxaInfo;
@property (nonatomic) BOOL canJump;
@property (retain, nonatomic) NSMutableArray *tailLabel;

+ (void)initialize;

@end
