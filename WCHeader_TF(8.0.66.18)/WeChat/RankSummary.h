@class NSString;

@interface RankSummary : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *topUserName;
@property (retain, nonatomic) NSString *jumpUrl;
@property (nonatomic) unsigned int actionId;
@property (nonatomic) unsigned int positionId;
@property (retain, nonatomic) NSString *externInfo;

+ (void)initialize;

@end
