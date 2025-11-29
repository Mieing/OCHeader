@class NSString, NSMutableArray, BaseResponse;

@interface AAQueryListRes : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (retain, nonatomic) NSMutableArray *record;
@property (retain, nonatomic) NSString *h5RecordUrl;
@property (retain, nonatomic) NSString *lastBillId;
@property (nonatomic) int lastBillType;
@property (nonatomic) unsigned int lastCreateTime;
@property (retain, nonatomic) NSString *lastTransId;

+ (void)initialize;

@end
