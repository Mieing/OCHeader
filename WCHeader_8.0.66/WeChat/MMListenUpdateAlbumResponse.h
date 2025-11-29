@class NSString, BaseResponse;

@interface MMListenUpdateAlbumResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int errcode;
@property (retain, nonatomic) NSString *errmsg;

+ (void)initialize;

@end
