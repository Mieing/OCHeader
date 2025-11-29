@class CommonMessageViewModel, NSDictionary;

@interface TextMessageMagicEmojiHandler : NSObject <WeChat.IMEHandler>

@property (weak, nonatomic) CommonMessageViewModel *viewModel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (retain, nonatomic) NSDictionary *extInfo;

- (id)onGetMetaWithID:(id)a0 needFrame:(BOOL)a1;
- (void).cxx_destruct;

@end
