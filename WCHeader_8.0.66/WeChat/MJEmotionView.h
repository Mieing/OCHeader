@class NSString, EditImageEmotionToolAttrView;
@protocol MJEmotionViewDelegate;

@interface MJEmotionView : UIView <EditImageEmotionToolAttrDelegate>

@property (retain, nonatomic) EditImageEmotionToolAttrView *emotionView;
@property (weak, nonatomic) id<MJEmotionViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)_addEmotionViewIfNeeded;
- (void)_layoutEmotionView;
- (void)onEmotionToolBarDoneBtnClicked;
- (void)didSelectEmoticonWithWrap:(id)a0 decodedImage:(id)a1;
- (void).cxx_destruct;

@end
