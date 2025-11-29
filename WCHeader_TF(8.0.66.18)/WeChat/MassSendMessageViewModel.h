@class NSArray, NSString, CEmoticonWrap, UIImage, NSMutableArray;

@interface MassSendMessageViewModel : BaseMessageViewModel {
    NSMutableArray *m_receivers;
}

@property (retain, nonatomic) CEmoticonWrap *emoticonWrap;
@property (readonly, nonatomic) NSArray *receivers;
@property (readonly, nonatomic) NSString *receiverString;
@property (readonly, nonatomic) NSString *contentText;
@property (readonly, nonatomic) UIImage *previewImage;
@property (readonly, nonatomic) double voiceTimeLength;
@property (readonly, nonatomic) NSString *voiceTimeString;
@property (nonatomic) BOOL isPlaying;
@property (readonly, nonatomic) NSString *videoTimeString;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })bodyViewSize;
- (struct CGSize { double x0; double x1; })textViewSize;
- (struct CGSize { double x0; double x1; })imageViewSize;
- (struct CGSize { double x0; double x1; })voiceViewSize;
- (struct CGSize { double x0; double x1; })videoViewSize;
- (struct CGSize { double x0; double x1; })emoticonViewSize;
- (struct CGSize { double x0; double x1; })finderViewSize;
- (BOOL)isText;
- (void)onMessageStopPlaying;
- (void).cxx_destruct;

@end
