@class FinderContact, MegaVideo, BaseResponse;

@interface MegaVideoDetailResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) MegaVideo *video;
@property (retain, nonatomic) FinderContact *contact;

+ (void)initialize;

@end
