@class FinderLiveKtvSongPlayInfo, NSString, FinderLiveContact, BaseResponse;

@interface FinderLiveKtvGetSongPlayInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderLiveKtvSongPlayInfo *playInfo;
@property (retain, nonatomic) NSString *micSdkUserId;
@property (retain, nonatomic) FinderLiveContact *liveContact;

+ (void)initialize;

@end
