@class NSString, BaseResponse;

@interface FinderGetMiaoJianVideoMetaResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) BOOL exist;
@property (retain, nonatomic) NSString *jianTongKuanMeta;

+ (void)initialize;

@end
