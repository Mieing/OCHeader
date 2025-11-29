@class WCCardUsedStoreInfo;
@protocol WCCardUsedStoreViewDelegate;

@interface WCCardUsedStoreView : MMUIView {
    WCCardUsedStoreInfo *_usedStoreInfo;
}

@property (weak, nonatomic) id<WCCardUsedStoreViewDelegate> delegate;

+ (double)calHeight:(id)a0;

- (id)initWithUsedStoreInfo:(id)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)onMakeACall;
- (void)onNavgation;
- (void).cxx_destruct;

@end
