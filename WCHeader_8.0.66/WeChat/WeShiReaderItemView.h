@class NSString, WeShiMsgCardView, ReaderWrap, RichTextView;
@protocol WeiShiMsgCardMenuDelegate, WeiShiReaderItemViewDelegate;

@interface WeShiReaderItemView : UIView <ReaderReporterExt> {
    RichTextView *titleView;
    WeShiMsgCardView *leftCardView;
    WeShiMsgCardView *rightCardView;
}

@property (weak, nonatomic) id<WeiShiReaderItemViewDelegate> viewDelegate;
@property (weak, nonatomic) id<WeiShiMsgCardMenuDelegate> menuDelegate;
@property (retain, nonatomic) ReaderWrap *leftReaderWrap;
@property (retain, nonatomic) ReaderWrap *rightReaderWrap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)startInitView;
- (id)timeText:(unsigned long long)a0;
- (void)onCardClicked:(id)a0;
- (void)onLeftCardLongPress:(id)a0;
- (void)onRightCardLongPress:(id)a0;
- (void)onTableViewDidScrollDown;
- (void)doReport;
- (void).cxx_destruct;

@end
