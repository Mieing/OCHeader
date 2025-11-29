@class MegaVideo, BaseResponse;

@interface MegaVideoPostResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) MegaVideo *video;

+ (void)initialize;

@end
