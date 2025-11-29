@class ForcePushItem, BaseResponse;

@interface ScanAppForcePushResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) ForcePushItem *forcePushItem;

+ (void)initialize;

@end
