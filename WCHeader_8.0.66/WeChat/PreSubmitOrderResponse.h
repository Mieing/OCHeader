@class NSString, NSMutableArray, BaseResponse;

@interface PreSubmitOrderResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int expressCount;
@property (retain, nonatomic) NSMutableArray *express;
@property (retain, nonatomic) NSString *lockId;
@property (nonatomic) int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) NSMutableArray *actionAttrs;
@property (nonatomic) unsigned int actionAttrCount;

+ (void)initialize;

@end
