@class NSString, NSMutableArray;

@interface GiftInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *giftList;
@property (retain, nonatomic) NSString *moreTitle;
@property (retain, nonatomic) NSString *moreUrl;

+ (void)initialize;

@end
