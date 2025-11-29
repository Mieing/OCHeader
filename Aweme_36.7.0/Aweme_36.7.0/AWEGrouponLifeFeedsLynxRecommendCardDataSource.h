@class NSString, AWEGrouponLifeFeedsLynxEmbeddedComponentVM;
@protocol AnnieXCardModelProtocol;

@interface AWEGrouponLifeFeedsLynxRecommendCardDataSource : NSObject <AWEGrouponLifeFeedsLynxCardDataSource>

@property (weak, nonatomic) AWEGrouponLifeFeedsLynxEmbeddedComponentVM *viewModel;
@property (readonly, nonatomic) id<AnnieXCardModelProtocol> cardModel;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cardFrame;
@property (readonly, nonatomic) BOOL forcedUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
