@class NSString, NSMutableArray, BaseResponse;

@interface QueryTransferListRes : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (retain, nonatomic) NSMutableArray *othersTransferRecords;
@property (retain, nonatomic) NSMutableArray *myTransferRecords;
@property (retain, nonatomic) NSString *timingId;

+ (void)initialize;

@end
