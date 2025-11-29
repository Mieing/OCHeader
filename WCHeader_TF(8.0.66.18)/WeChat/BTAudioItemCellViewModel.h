@class NSString, TingItem;

@interface BTAudioItemCellViewModel : BTReaderItemCellViewModel <IAudioReceiverExt, IMusicPlayerExt>

@property (readonly, nonatomic) NSString *timeStr;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } containViewSize;
@property (readonly, nonatomic) TingItem *tingItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateViewModelWithReaderWrap:(id)a0 msgWrap:(id)a1;

- (id)itemViewClassName;
- (double)viewHeight;
- (unsigned long long)digestLineNumber;
- (BOOL)exposeDigest;
- (double)titleMaxWidth;
- (id)titleLabelStyles;
- (struct CGSize { double x0; double x1; })titleSize;
- (id)coverImgURL;

@end
