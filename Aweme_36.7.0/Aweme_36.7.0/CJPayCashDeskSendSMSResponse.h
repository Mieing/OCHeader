@class NSString, CJPayErrorButtonInfo;

@interface CJPayCashDeskSendSMSResponse : CJPayBaseResponse

@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *mobileMask;
@property (retain, nonatomic) CJPayErrorButtonInfo *buttonInfo;

+ (id)keyMapper;

- (void).cxx_destruct;

@end
