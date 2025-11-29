@class NSString, BaseResponse;

@interface CheckMusicResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *musicId;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
