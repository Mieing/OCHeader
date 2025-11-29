@interface AWEMusicStreamingImpl.LunaSongCell : UITableViewCell {
    void /* unknown type, empty encoding */ songWaveView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_songWaveContainerView;
    void /* unknown type, empty encoding */ coverImageView;
    void /* unknown type, empty encoding */ indexLabel;
    void /* unknown type, empty encoding */ playIcon;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ subscriberIcon;
}

@property (nonatomic) long long cellStyle;
@property (nonatomic) BOOL needShowPlaying;
@property (nonatomic) BOOL needShowSubscriberIcon;
@property (nonatomic) BOOL onlyRespondToTitleClick;
@property (nonatomic) BOOL needAdaptBigFontMode;

- (void)updateWithTrack:(id)a0 index:(long long)a1;
- (void)updateWithPlayStatus:(long long)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
