@class NSString;

@interface WCFinderILinkEventExtProxy : NSObject <ILinkEventExt>

@property (copy, nonatomic) id /* block */ linkClickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)proxyWithBlock:(id /* block */)a0;

- (void)addToTextView:(id)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
