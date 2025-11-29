@class NSString;

@interface AWEMusicStreamingImpl.BNLyricModeLineCell : AWEMusicStreamingImpl.BNBaseCell {
    void /* unknown type, empty encoding */ $__lazy_storage_$_lineLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_transLineLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_highlightView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_anchorView;
    void /* unknown type, empty encoding */ isCurrent;
    void /* unknown type, empty encoding */ index;
    void /* unknown type, empty encoding */ backView;
    void /* unknown type, empty encoding */ linesGap;
    void /* unknown type, empty encoding */ tapGestureRecognizer;
    void /* unknown type, empty encoding */ onTapNonLineLabelArea;
}

@property (nonatomic, readonly) NSString *reuseIdentifier;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (id)initWithCoder:(id)a0;

@end
