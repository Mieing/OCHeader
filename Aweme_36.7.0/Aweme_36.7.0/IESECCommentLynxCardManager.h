@class NSString, NSDictionary, UIView;
@protocol IESHYContainerProtocol, IESECCommentLynxCardManagerDelegate;

@interface IESECCommentLynxCardManager : NSObject <IESHYHybridViewLifecycleProtocol>

@property (retain, nonatomic) NSString *lastestLynxURL;
@property (retain, nonatomic) NSDictionary *params;
@property (readonly, nonatomic) NSString *lynxURL;
@property (nonatomic) struct CGSize { double width; double height; } updatedSize;
@property (nonatomic) BOOL hasReload;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (weak, nonatomic) id<IESECCommentLynxCardManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)loadLynxView;
- (void)loadLynxURL:(id)a0 params:(id)a1;
- (void)reloadLynxURL:(id)a0;
- (void).cxx_destruct;
- (void)reload;
- (id)init;

@end
