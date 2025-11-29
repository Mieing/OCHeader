@class NSArray, NSString, IESLivePopupItem, IESLiveGuideToolBarItem, IESLiveGameSpecifyRatioView;
@protocol IESLiveGuideToolBarProvider;

@interface IESLiveGameSpecifyRatioFragment : IESLiveGuideComponent <IESLiveGuideActions, IESLiveGuideOpenLiveAdditionalEvent>

@property (nonatomic) unsigned long long currentOrientation;
@property (retain, nonatomic) id<IESLiveGuideToolBarProvider> toolbarProvider;
@property (retain, nonatomic) IESLiveGuideToolBarItem *gameSpecifyRatioItem;
@property (nonatomic) unsigned long long gameSpecifyRatioType;
@property (retain, nonatomic) IESLiveGameSpecifyRatioView *gameSpecifyRatioView;
@property (retain, nonatomic) IESLiveGuideToolBarItem *gameOrientationItem;
@property (retain, nonatomic) IESLivePopupItem *popupItem;
@property (retain, nonatomic) NSArray *lastPayloadParams;
@property (nonatomic) unsigned long long liveType;
@property (retain, nonatomic) NSString *gameSpecifyRatioTrack;
@property (nonatomic) long long initialGameSpecifyRatioType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)configItem;
- (void)liveTypeDidChange:(unsigned long long)a0;
- (void)appendStartLiveTrackParams:(id)a0 room:(id)a1 completion:(id /* block */)a2;
- (id)trackClickParams;
- (BOOL)enableSpecifyRatio;
- (unsigned long long)getInitGameSpecifyRatioType;
- (void)checkGameSpecifyRatioTypeWithOrientatin:(unsigned long long)a0;
- (void)appendPayloadArraysWithScene:(id)a0;
- (void)removePayloadArrays;
- (void)configGameSpecifyRatioItem;
- (void)configGameOrientationItem;
- (void)gameSpecifyRatioItemClicked;
- (BOOL)isReasonableWithOrientType:(unsigned long long)a0 type:(unsigned long long)a1;
- (void)logWithExtraParams:(id)a0;
- (void)setOpenLiveTrack;
- (void)gameOrientationButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
