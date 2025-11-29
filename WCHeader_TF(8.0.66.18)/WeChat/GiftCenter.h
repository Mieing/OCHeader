@class NSString, NSMutableArray;

@interface GiftCenter : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *jumpUrl;
@property (retain, nonatomic) NSString *imgUrl;
@property (retain, nonatomic) NSMutableArray *signGiftList;
@property (nonatomic) unsigned int positionId;
@property (retain, nonatomic) NSString *externInfo;

+ (void)initialize;

@end
