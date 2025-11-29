@class NSString, NSMutableArray;

@interface PrizeData : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *prizeTypeList;
@property (nonatomic) BOOL showWording;
@property (retain, nonatomic) NSString *wording;

+ (void)initialize;

@end
