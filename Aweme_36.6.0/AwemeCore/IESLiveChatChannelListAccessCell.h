@class NSString, IESLiveMessageLabel;

@interface IESLiveChatChannelListAccessCell : IESLiveChatChannelBaseCell <IESLiveMessageListCellTapTextProtocol>

@property (retain, nonatomic) IESLiveMessageLabel *contentLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshWith:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertTextViewRectToCell:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)longPress:(id)a0;
- (void).cxx_destruct;
- (id)selectionRectsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)loadView;
- (void)singleTap:(id)a0;

@end
