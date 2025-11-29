@class QRButtonInfo, NSString, NSMutableArray, BaseResponse;

@interface CgiApplyQrcodeResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *titleInfo;
@property (nonatomic) BOOL enableUserInput;
@property (retain, nonatomic) NSMutableArray *usage;
@property (retain, nonatomic) QRButtonInfo *firstButton;
@property (retain, nonatomic) QRButtonInfo *secondButton;

+ (void)initialize;

@end
