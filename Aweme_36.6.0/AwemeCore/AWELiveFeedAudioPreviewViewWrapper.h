@class NSString, IESLiveBigPartyPreStreamController, IESLiveFeedAudioView;
@protocol IESLivePlayerProtocol;

@interface AWELiveFeedAudioPreviewViewWrapper : NSObject <AWELiveFeedAudioPreviewViewProtocol>

@property (retain, nonatomic) IESLiveFeedAudioView *audioView;
@property (retain, nonatomic) id<IESLivePlayerProtocol> player;
@property (nonatomic) BOOL ignorePlayerHidden;
@property (retain, nonatomic) IESLiveBigPartyPreStreamController *bigPartyController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithListModel:(id)a0;
- (id)getAudioView;
- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
