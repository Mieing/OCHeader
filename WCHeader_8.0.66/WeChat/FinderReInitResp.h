@class NSMutableArray;

@interface FinderReInitResp : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *myacct;
@property (nonatomic) unsigned int userver;
@property (nonatomic) unsigned int needReinit;

+ (void)initialize;

@end
