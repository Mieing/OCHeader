@class NSString, NSData, NSMutableArray, BaseResponse;

@interface WxaAttrSyncResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *lastAttrVersion;
@property (retain, nonatomic) NSMutableArray *updateInfoList;
@property (retain, nonatomic) NSString *wxaUserName;

+ (void)initialize;

@end
