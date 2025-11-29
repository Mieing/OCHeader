@class HoneyPayListResp_Pertermit, NSString, RightCorner, BaseResponse, DocumentItem, HoneyPayListResp_Banner, NSMutableArray, NoticeItem;

@interface HoneyPayListResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) NSMutableArray *honeyRecords;
@property (retain, nonatomic) HoneyPayListResp_Pertermit *pertermit;
@property (retain, nonatomic) RightCorner *rightCorner;
@property (nonatomic) BOOL isShowOpenCardButton;
@property (retain, nonatomic) HoneyPayListResp_Banner *noticeBanner;
@property (retain, nonatomic) NoticeItem *noticeItem;
@property (nonatomic) BOOL needSignAgreement;
@property (retain, nonatomic) DocumentItem *signAgreementWording;

+ (void)initialize;

@end
