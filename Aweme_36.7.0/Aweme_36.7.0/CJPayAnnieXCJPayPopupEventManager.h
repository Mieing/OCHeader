@class NSString;

@interface CJPayAnnieXCJPayPopupEventManager : NSObject <BDXPopupEventProtocol>

@property (copy, nonatomic) NSString *sessionId;
@property (nonatomic) BOOL hasCalledPopupMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)popup:(id)a0 didDragTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;
- (id)initWithSessionId:(id)a0;

@end
