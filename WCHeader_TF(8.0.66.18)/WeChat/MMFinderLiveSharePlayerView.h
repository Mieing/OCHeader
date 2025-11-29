@class NSString, MMLiveCDNPlayerView, UIView, UILabel, WCFinderDataItem;
@protocol TextStateBaseMediaViewDelegate;

@interface MMFinderLiveSharePlayerView : MMFinderLiveBaseShareView <TextStateBaseMediaView, MMLiveCDNPlayerViewDelegate>

@property (readonly, nonatomic) double mediaAspectRatio;
@property (weak, nonatomic) id<TextStateBaseMediaViewDelegate> textStateDelegate;
@property (nonatomic, getter=isMuted) BOOL muted;
@property (nonatomic, getter=isForceMuted) BOOL forceMuted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) MMLiveCDNPlayerView *CDNPlayerView;
@property (retain, nonatomic) UIView *tipsView;
@property (retain, nonatomic) UILabel *endingLabel;
@property (retain, nonatomic) WCFinderDataItem *mediaDataItem;
@property (nonatomic) struct CGSize { double width; double height; } currentMediaSize;
@property (nonatomic) BOOL waitPlaying;
@property (weak, nonatomic) id<TextStateBaseMediaViewDelegate> textStateDelegate;
@property (nonatomic) BOOL muted;
@property (nonatomic) BOOL playing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
