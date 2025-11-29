@interface AWEMVChannelScrollHelper : NSObject {
    void /* unknown type, empty encoding */ draggingBeginDate;
    void /* unknown type, empty encoding */ draggingBeginContentOffset;
}

@property (nonatomic) double velocity;

- (void).cxx_destruct;
- (id)init;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; })a2;

@end
