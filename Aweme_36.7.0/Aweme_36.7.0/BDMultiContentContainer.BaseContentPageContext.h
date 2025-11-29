@class NSDictionary;

@interface BDMultiContentContainer.BaseContentPageContext : AWEPageContext {
    void /* unknown type, empty encoding */ subContexts;
    void /* unknown type, empty encoding */ serviceContainer;
    void /* unknown type, empty encoding */ _isScrolling;
    void /* unknown type, empty encoding */ _listScrolled;
    void /* unknown type, empty encoding */ listPlayState;
    void /* function */ viewedImagesMap;
    void /* unknown type, empty encoding */ defaultSeekToTime;
    void /* unknown type, empty encoding */ needLayoutWhenScrollToIndex;
    void /* unknown type, empty encoding */ _shouldHideOverlay;
}

@property (nonatomic) BOOL listScrolled;
@property (nonatomic, readonly) BOOL isListActive;
@property (nonatomic) long long defaultIndex;
@property (nonatomic, copy) NSDictionary *viewedImagesMap;
@property (nonatomic) BOOL needSetTargetContentOffset;
@property (nonatomic) BOOL needSyncUpdate;

- (void)setDefaultSeekToTime:(double)a0;
- (double)getDefaultSeekToTime;
- (void).cxx_destruct;
- (id)init;

@end
