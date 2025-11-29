@class NSData, NSString, MMListenMusicBaseResponse, MMListenFinderSingerDiscoverMessage, MMListenDiscoverResponse_JumpableTopToast, MMListenDiscoverResponse_JumpableTopToastV2, BaseResponse, NSMutableArray, MMListenFinderAudioDiscoverMessage, MMListenAudioBaseResponse;

@interface MMListenDiscoverResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *lines;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSString *topToast;
@property (retain, nonatomic) NSString *topToastJumpSchemeWording;
@property (retain, nonatomic) MMListenDiscoverResponse_JumpableTopToast *jumpableTopToast;
@property (retain, nonatomic) MMListenDiscoverResponse_JumpableTopToastV2 *jumpableTopToastV2;
@property (retain, nonatomic) NSMutableArray *jumpableTopToastsV2;
@property (retain, nonatomic) MMListenFinderSingerDiscoverMessage *finderSingerDiscoverMessage;
@property (retain, nonatomic) MMListenFinderAudioDiscoverMessage *finderAudioDiscoverMessage;
@property (retain, nonatomic) NSMutableArray *reddotItem;
@property (nonatomic) BOOL isMergeDiscoverItem;
@property (retain, nonatomic) MMListenMusicBaseResponse *musicBaseResponse;
@property (retain, nonatomic) MMListenAudioBaseResponse *audioBaseResponse;
@property (retain, nonatomic) NSMutableArray *topLines;
@property (retain, nonatomic) NSMutableArray *banner;

+ (void)initialize;

@end
