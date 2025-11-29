@class NSString, NSMutableArray;

@interface AABatchQueryOrderInfoRes_AAOrder : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *billNo;
@property (retain, nonatomic) NSString *launcherUsername;
@property (nonatomic) unsigned int state;
@property (retain, nonatomic) NSMutableArray *payerList;

+ (void)initialize;

@end
