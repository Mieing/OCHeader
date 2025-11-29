@class BaseRequest, NSString;

@interface AAQueryListReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int limit;
@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *lastBillId;
@property (nonatomic) int lastBillType;
@property (nonatomic) unsigned int lastCreateTime;
@property (retain, nonatomic) NSString *lastTransId;

+ (void)initialize;

@end
