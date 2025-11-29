@class NSString, WCFinderCreateLiveViewModel;

@interface WCFinderPersonalCenterLiveActionHandle : NSObject <WCFinderPersonalCenterLiveActionHandle>

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *descriptionPromptWording;
@property (retain, nonatomic) WCFinderCreateLiveViewModel *createLiveVM;
@property (nonatomic) unsigned long long liveStartEntrance;
@property (nonatomic) unsigned long long liveStartSourceScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCommentScene:(int)a0 username:(id)a1;
- (void)onPostActionViewClickLive:(id)a0;
- (void)realStartLive:(id)a0;
- (void)onPostActionViewExposeLive:(id)a0;
- (void).cxx_destruct;

@end
