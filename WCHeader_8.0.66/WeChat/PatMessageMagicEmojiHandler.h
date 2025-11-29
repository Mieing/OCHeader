@class PatWrap, AppPatMessageViewModel, NSString;

@interface PatMessageMagicEmojiHandler : NSObject <WeChat.IMEHandler>

@property (weak, nonatomic) AppPatMessageViewModel *viewModel;
@property (retain, nonatomic) PatWrap *patWrap;
@property (retain, nonatomic) NSString *chatUserName;
@property (retain, nonatomic) NSString *emojiKey;
@property (retain, nonatomic) NSString *emojiName;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (id)onGetMetaWithID:(id)a0 needFrame:(BOOL)a1;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
