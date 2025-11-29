@protocol CJPayLoadingManagerProtocol;

@interface CJPayDouyinHalfLoadingItem : CJPayHalfLoadingItem {
    id<CJPayLoadingManagerProtocol> _delegate;
}

+ (long long)loadingType;

- (void)startLoadingWithAttributes:(id)a0;
- (void)startAnimation;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (id)loadingTitle;

@end
