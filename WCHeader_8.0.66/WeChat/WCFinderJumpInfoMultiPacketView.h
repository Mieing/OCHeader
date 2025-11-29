@class NSString, WCFinderRichTextView, NSMutableArray, WCFinderJumpInfo;
@protocol WCFinderJumpInfoMultiPacketViewDelegate;

@interface WCFinderJumpInfoMultiPacketView : UIView <WCFinderJumpInfoViewProtocol>

@property (nonatomic) double maxWidth;
@property (retain, nonatomic) WCFinderRichTextView *titleView;
@property (retain, nonatomic) NSMutableArray *pagViewArray;
@property (retain, nonatomic) WCFinderJumpInfo *titleJumpInfo;
@property (retain, nonatomic) NSMutableArray *packetJumpInfoArray;
@property (nonatomic) int showPosition;
@property (weak, nonatomic) id<WCFinderJumpInfoMultiPacketViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setMaxWidth:(double)a0 maxTextAreaWidth:(double)a1;
- (void)updateWithJumpInfoArray:(id)a0 showPosition:(int)a1;
- (void)changeToShow:(BOOL)a0;
- (void)startExposeAction;
- (void)endExposeAction;
- (id)jumpInfo;
- (void)updateWithJumpInfo:(id)a0 showPosition:(int)a1;
- (void)updateWithJumpInfo:(id)a0 style:(id)a1;
- (id)jumpInfoArray;
- (void)layoutUI;
- (void)onPagViewDidClick:(id)a0;
- (id)contentVM;
- (id)genPageView;
- (void).cxx_destruct;

@end
