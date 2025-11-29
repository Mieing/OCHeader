@class NSString;
@protocol IESLiveByteCastProvider;

@interface IESLiveCommentEntryByteCastView : IESLiveCommentEntryBaseView <IESLiveByteCastAction, IESLiveMessageInteractionModuleDanmakuAction>

@property (retain, nonatomic) id<IESLiveByteCastProvider> byteCastProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)didSetEnableNormalDanmuku:(BOOL)a0;
- (void)setupInnerButton;
- (void)setupExpandButton;
- (id)entryViewType;
- (void)commentEntryUpdate;
- (void)willSupportCastDanmaku:(BOOL)a0;
- (void)castDanmakuButtonClicked:(BOOL)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
