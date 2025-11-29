@class NSString;
@protocol AWEAwemeBizPlayVideoProtocol;

@interface AWEAwemeBizPlayVideoProtocolAdapter : NSObject <IESLLBizPlayVideoProtocol>

@property (retain, nonatomic) id<AWEAwemeBizPlayVideoProtocol> sourceDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isVideoRelatedPanelShowing;
- (BOOL)isImageAlbum;
- (BOOL)isFeedPlayerPlaying;
- (void)iesll_hideGradientView;
- (void)iesll_showGradientView;
- (id)model;
- (void).cxx_destruct;
- (id)contentView;
- (long long)scaleMode;

@end
