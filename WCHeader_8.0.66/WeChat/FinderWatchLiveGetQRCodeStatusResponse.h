@class BaseResponse, NSString, FinderLiveInfo, FinderLiveContact;

@interface FinderWatchLiveGetQRCodeStatusResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *token;
@property (nonatomic) unsigned int nextPollTs;
@property (retain, nonatomic) FinderLiveContact *anchorLiveContact;
@property (retain, nonatomic) FinderLiveInfo *liveInfo;

+ (void)initialize;

@end
