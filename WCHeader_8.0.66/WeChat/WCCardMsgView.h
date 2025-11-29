@class NSString, WCCardPkgMsg;
@protocol WCCardMsgViewDelegate;

@interface WCCardMsgView : MMUIView <MMWebImageViewDelegate> {
    WCCardPkgMsg *_cardMsg;
}

@property (weak, nonatomic) id<WCCardMsgViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)GetHeightForCardMsg:(id)a0;

- (id)initWithCardMsg:(id)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)onLoadImageOK:(id)a0;
- (void)onAction;
- (void).cxx_destruct;

@end
