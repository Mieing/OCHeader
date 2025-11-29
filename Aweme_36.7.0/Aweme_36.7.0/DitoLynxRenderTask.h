@class NSString, AWEPOICardPerfDataModel, NSError, UIView;
@protocol DitoLynxContainerProtocol, BDXResourceProtocol;

@interface DitoLynxRenderTask : NSObject

@property (nonatomic) BOOL didEnd;
@property (copy, nonatomic) NSString *nodeTag;
@property (nonatomic) double renderStartTime;
@property (retain, nonatomic) UIView<DitoLynxContainerProtocol> *containerView;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) struct CGSize { double width; double height; } preSize;
@property (nonatomic) struct CGSize { double width; double height; } renderCompleteSize;
@property (nonatomic) double updateSizeTime;
@property (retain, nonatomic) id<BDXResourceProtocol> resourceInfo;
@property (nonatomic) BOOL forceUpdateInThisSession;
@property (retain, nonatomic) AWEPOICardPerfDataModel *cardPerfData;

- (id)initWithNodeTag:(id)a0;
- (void)tryUpdateRenderCompleteSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
