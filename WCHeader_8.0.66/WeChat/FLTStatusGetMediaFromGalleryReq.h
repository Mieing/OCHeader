@interface FLTStatusGetMediaFromGalleryReq : WXPBGeneratedMessage

@property (nonatomic) int mediaType;
@property (nonatomic) int maxCount;
@property (nonatomic) long long maxVideoDurationMs;

+ (void)initialize;

@end
