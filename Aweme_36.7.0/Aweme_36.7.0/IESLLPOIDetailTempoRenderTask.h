@class NSString, NSDictionary, NSError, UIView, IESLLPOICardPerfDataModel;
@protocol IESLLTempoContainerProtocol;

@interface IESLLPOIDetailTempoRenderTask : NSObject

@property (copy, nonatomic) NSString *nodeTag;
@property (retain, nonatomic) UIView<IESLLTempoContainerProtocol> *containerView;
@property (nonatomic) BOOL didEnd;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) struct CGSize { double width; double height; } preSize;
@property (retain, nonatomic) IESLLPOICardPerfDataModel *cardPerfData;
@property (nonatomic) double renderStartTime;
@property (copy, nonatomic) NSDictionary *dataParams;

- (id)initWithNodeTag:(id)a0;
- (void).cxx_destruct;

@end
