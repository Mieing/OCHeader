@protocol AbandonTextViewDelegate;

@interface AbandonTextView : UILabel {
    BOOL _bIsTouchesEnded;
}

@property (weak, nonatomic) id<AbandonTextViewDelegate> m_delegate;

- (id)init;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)initMembers;
- (void).cxx_destruct;

@end
