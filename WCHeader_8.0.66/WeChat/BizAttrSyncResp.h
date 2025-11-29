@class NSData, NSMutableArray, BaseResponse;

@interface BizAttrSyncResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *lastAttrVersion;
@property (retain, nonatomic) NSMutableArray *updateInfoList;

+ (void)initialize;

- (void)setUpdateInfoList:(id)a0;
- (id)updateInfoList;
- (void)setLastAttrVersion:(id)a0;
- (id)lastAttrVersion;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
