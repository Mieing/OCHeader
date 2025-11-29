@class IESForestRequestParameters;
@protocol LynxAsyncManagerProtocol;

@interface AnnieXAsyncManager : NSObject

@property (retain, nonatomic) id<LynxAsyncManagerProtocol> asyncManager;
@property (retain, nonatomic) IESForestRequestParameters *forestParams;

+ (id)sharedInstance;

- (void)asyncLayoutLynxWithCardModel:(id)a0 bid:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 finishCallBack:(id /* block */)a3 viewCreatorCallback:(id /* block */)a4;
- (void)asyncLayoutLynxWithCardModel:(id)a0 bid:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 finishCallBack:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;

@end
