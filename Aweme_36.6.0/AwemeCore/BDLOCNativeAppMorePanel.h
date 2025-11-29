@class NSString, BDPMorePanel;

@interface BDLOCNativeAppMorePanel : NSObject

@property (readonly, copy, nonatomic) NSString *appID;
@property (readonly, weak, nonatomic) BDPMorePanel *innerPanel;

- (void)dismissAnimated:(BOOL)a0 complete:(id /* block */)a1;
- (id)initWithAppID:(id)a0 innerPanel:(id)a1;
- (void)showInView:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
