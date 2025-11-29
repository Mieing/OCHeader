@class NSString, SquarePreloadResponse, AudioMixReqInfo;

@interface AudioSquareStoreInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *tipsid;
@property (retain, nonatomic) AudioMixReqInfo *reqInfo;
@property (retain, nonatomic) SquarePreloadResponse *preloadResponse;

+ (void)initialize;

@end
