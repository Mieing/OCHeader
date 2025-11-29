@class NSString;
@protocol AFDRichContentContainerViewControllerProtocol;

@interface AFDRichContentContainerViewControllerProtocolAdapter : NSObject <IESLLRichContentContainerViewControllerProtocol>

@property (weak, nonatomic) id<AFDRichContentContainerViewControllerProtocol> richContentContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateAwemeContentViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })awemeContentViewFrame;
- (BOOL)canUpdateAwemeContentViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithRichContentContainer:(id)a0;
- (void).cxx_destruct;

@end
