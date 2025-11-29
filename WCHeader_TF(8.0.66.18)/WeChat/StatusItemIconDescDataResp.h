@class NSString, StatusItemIconDescData;

@interface StatusItemIconDescDataResp : WXPBGeneratedMessage

@property (nonatomic) BOOL result;
@property (nonatomic) int errCode;
@property (retain, nonatomic) NSString *errMsg;
@property (retain, nonatomic) StatusItemIconDescData *data;

+ (void)initialize;

@end
