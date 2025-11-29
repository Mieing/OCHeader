@class WCFinderLiveHomePageFeedEntertainmentAudioRoomTalkingState, NSArray, NSString, MMFinderLiveAudioRoomBackgroundImageInfo;
@protocol WCFinderLiveHomePageFeedEntertainmentAudioRoomVMDelegate;

@interface WCFinderLiveHomePageFeedEntertainmentAudioRoomVM : WCFinderLiveGenericFeedVM <MMFinderLiveInfoMgrExt, MMFinderLiveFeedExtraInfoFetchExt>

@property (retain, nonatomic) NSArray *teamupList;
@property (retain, nonatomic) NSArray *notificationList;
@property (retain, nonatomic) MMFinderLiveAudioRoomBackgroundImageInfo *bgImageInfo;
@property (retain, nonatomic) NSString *headImgUrl;
@property (retain, nonatomic) WCFinderLiveHomePageFeedEntertainmentAudioRoomTalkingState *talkingStatus;
@property (weak, nonatomic) id<WCFinderLiveHomePageFeedEntertainmentAudioRoomVMDelegate> delegate;
@property (readonly, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithModel:(id)a0 scene:(int)a1 sessionExtraKey:(id)a2 containerId:(unsigned long long)a3 ctx:(id)a4;
- (void)updatePreviewInfo:(id)a0;
- (void)loadBackgroundImageWithAvatarImage:(id)a0 displayUrl:(id)a1;
- (void)recvAnchorSeiInfo:(id)a0;
- (void)updateOriginInfoItemList;
- (void)clearTalkingStatus;
- (void)onFinderLiveAudioRoomBackgroundImageInfoUpdated:(id)a0 originalUrlString:(id)a1;
- (void)onFeedEntertainmentCardUpdate:(unsigned long long)a0 previewInfo:(id)a1;
- (void).cxx_destruct;

@end
