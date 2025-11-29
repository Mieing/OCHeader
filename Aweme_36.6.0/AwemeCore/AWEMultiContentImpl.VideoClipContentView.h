@class NSString, AWEAwemeModel;
@protocol AFDRichContentPageContextProtocol;

@interface AWEMultiContentImpl.VideoClipContentView : UIView <AFDClipContentViewProtocol> {
    void /* unknown type, empty encoding */ shouldMute;
    void /* unknown type, empty encoding */ $__lazy_storage_$_player;
    void /* function */ updateContentSizeBlock;
    void /* function */ imageCompletionBlock;
    void /* function */ imageLoadFinished;
    void /* unknown type, empty encoding */ $__lazy_storage_$_coverImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingView;
    void /* unknown type, empty encoding */ clipModel;
    void /* function */ referString;
    void /* function */ enterFrom;
    void /* unknown type, empty encoding */ logExtra;
}

@property (nonatomic, retain) AWEAwemeModel *aweme;
@property (nonatomic, retain) id<AFDRichContentPageContextProtocol> pageContext;
@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic) long long index;
@property (nonatomic) long long totalCount;
@property (nonatomic) BOOL isInFullPage;
@property (nonatomic) unsigned long long albumContentMode;
@property (nonatomic, copy) id /* block */ updateContentSizeBlock;
@property (nonatomic, copy) id /* block */ imageCompletionBlock;
@property (nonatomic, copy) id /* block */ imageLoadFinished;
@property (nonatomic) unsigned long long scene;
@property (nonatomic, copy) NSString *referString;
@property (nonatomic, copy) NSString *enterFrom;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentContentRect;
- (void)setModel:(id)a0 placeholderImage:(id)a1 index:(long long)a2 totalCount:(long long)a3 logExtra:(id)a4;
- (void)resetImageModel;
- (void)setIsInFullPage:(BOOL)a0 animated:(BOOL)a1;
- (void)setAlbumContentMode:(unsigned long long)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
