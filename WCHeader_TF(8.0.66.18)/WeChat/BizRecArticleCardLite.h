@class NSString, NSMutableArray;

@interface BizRecArticleCardLite : WXPBGeneratedMessage

@property (nonatomic) unsigned long long clientId;
@property (retain, nonatomic) NSMutableArray *cardInfo;
@property (nonatomic) unsigned int style;
@property (retain, nonatomic) NSString *event;
@property (retain, nonatomic) NSString *extraData;

+ (void)initialize;

@end
