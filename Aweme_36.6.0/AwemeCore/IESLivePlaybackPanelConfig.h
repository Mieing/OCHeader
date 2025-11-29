@class UIColor, NSString, UIView;

@interface IESLivePlaybackPanelConfig : NSObject <IESLivePlaybackPanelConfigProtocol>

@property (nonatomic) struct CGSize { double width; double height; } shadowSize;
@property (nonatomic) unsigned long long style;
@property (nonatomic) struct CGSize { double width; double height; } panelContentSize;
@property (nonatomic) BOOL disableClipsToBounds;
@property (nonatomic) BOOL disableShowShadow;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) BOOL animated;
@property (copy, nonatomic) id /* block */ willShow;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ dismissCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
