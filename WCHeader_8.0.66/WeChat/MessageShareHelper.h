@class MMScrollActionSheet, NSString, CMessageWrap, NSMutableArray;

@interface MessageShareHelper : NSObject <MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate>

@property (nonatomic) long long forwardType;
@property (retain, nonatomic) CMessageWrap *messageWrap;
@property (retain, nonatomic) MMScrollActionSheet *scrollActionSheet;
@property (retain, nonatomic) NSMutableArray *firstRow;
@property (retain, nonatomic) NSMutableArray *secondRow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })iconSize;
- (void)onForwardToContact:(id)a0;
- (void)addForward;
- (void)addFavorite;
- (void)addOpenByOtherApp:(id)a0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 fromViewController:(id)a2;
- (void)addMsgLocate:(unsigned long long)a0;
- (void)addSavePhoto:(id)a0;
- (void)addSaveVideo:(id)a0;
- (id)initWithForwardType:(long long)a0;
- (void)dealloc;
- (void)addItem:(unsigned long long)a0 action:(id /* block */)a1;
- (void)shareMessage:(id)a0 inViewController:(id)a1;
- (void)dismiss:(BOOL)a0;
- (void)scrollActionSheet:(id)a0 didSelecteItem:(id)a1;
- (void)clickRFItemCallBack:(id)a0;
- (void)relayoutScrollSheet;
- (void).cxx_destruct;

@end
