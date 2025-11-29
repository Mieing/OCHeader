@class NSString, NSMutableArray, BaseResponse;

@interface GetShowSourceResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (retain, nonatomic) NSMutableArray *sourcelist;
@property (retain, nonatomic) NSString *pagedata;
@property (nonatomic) unsigned int hasmore;
@property (retain, nonatomic) NSString *illegalMsg;
@property (retain, nonatomic) NSMutableArray *illegalMaterialIds;
@property (nonatomic) unsigned int candelete;
@property (nonatomic) unsigned long long lastOptainTime;
@property (nonatomic) unsigned int isShowExpiredEntry;
@property (retain, nonatomic) NSString *maxInvalidWording;

+ (void)initialize;

@end
