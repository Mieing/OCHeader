@interface AWELandscapePlaybackSettingView : UIView {
    void /* unknown type, empty encoding */ $__lazy_storage_$_separatorLine;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_currentPlaybackSetting;
    void /* unknown type, empty encoding */ $__lazy_storage_$_segmentControl;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ trackSettingClickAction;
    void /* unknown type, empty encoding */ trackSettingChangeAction;
}

+ (id)defaultSettingView;
+ (long long)currentPlaybackSetting;
+ (void)setCurrentPlaybackSetting:(long long)a0;
+ (id)currentPlaybackSettingTrackDescription;
+ (id)playbackSettingKey;

- (void)setupTrackSettingClickAction:(id /* block */)a0;
- (void)setupTrackSettingChangeAction:(id /* block */)a0;
- (void)onSegmentValueChanged:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)initWith:(id)a0;

@end
