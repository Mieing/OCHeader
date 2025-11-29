@class BaseResponse;

@interface BatchUpdateContactLabelWithSeqResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int sortRet;

+ (void)initialize;

@end
