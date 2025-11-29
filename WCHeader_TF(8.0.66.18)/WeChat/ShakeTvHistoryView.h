@class NSString, NSArray;
@protocol ShakeTvHistoryViewDelegate;

@interface ShakeTvHistoryView : MMUIView <IShakeTvHistoryMgrExt> {
    NSArray *_arrTVItem;
}

@property (weak, nonatomic) id<ShakeTvHistoryViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onShakeTvHistoryDataChange;
- (void)refreshData;
- (unsigned int)getBtnWidth;
- (unsigned int)getBtnCnt;
- (unsigned int)getXOffset;
- (void)layoutAllView;
- (void)onClcikIconBtn:(id)a0;
- (void).cxx_destruct;

@end
