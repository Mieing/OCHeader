@class NSString, NSMutableArray;

@interface BizRecArticleCard : WXPBGeneratedMessage

@property (nonatomic) unsigned int flag;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *bizInfo;
@property (nonatomic) unsigned long long clientId;
@property (retain, nonatomic) NSMutableArray *updateFinderInfo;

+ (void)initialize;

@end
