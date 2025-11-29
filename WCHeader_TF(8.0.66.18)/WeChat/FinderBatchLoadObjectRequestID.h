@class NSString;

@interface FinderBatchLoadObjectRequestID : WXPBGeneratedMessage

@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *exportId;
@property (retain, nonatomic) NSString *nonce;

+ (void)initialize;

@end
