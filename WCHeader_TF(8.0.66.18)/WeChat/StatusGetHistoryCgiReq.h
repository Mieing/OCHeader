@class BaseRequest, NSData, NSMutableArray;

@interface StatusGetHistoryCgiReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSData *context;
@property (nonatomic) unsigned long long op;
@property (nonatomic) unsigned long long startKey;
@property (nonatomic) unsigned long long limit;
@property (retain, nonatomic) NSMutableArray *statusIds;

+ (void)initialize;

@end
