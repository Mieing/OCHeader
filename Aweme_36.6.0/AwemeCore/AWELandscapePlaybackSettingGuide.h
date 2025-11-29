@class NSString, DUXPopover, AWEAwemeModel;

@interface AWELandscapePlaybackSettingGuide : AWELandscapeBaseGuide <AWELandscapeGuideProtocol>

@property (class, nonatomic) BOOL guideHasShow;

@property (retain, nonatomic) DUXPopover *popover;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canShow;
- (id)initWithTargetView:(id)a0 model:(id)a1 context:(id)a2;
- (void)dismiss;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (long long)priority;
- (id)identifier;
- (BOOL)show;

@end
