@class MegaVideoPreloadInfo, NSData, NSMutableArray, BaseResponse;

@interface MegaVideoUserPageResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *object;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) MegaVideoPreloadInfo *preload;

+ (void)initialize;

@end
