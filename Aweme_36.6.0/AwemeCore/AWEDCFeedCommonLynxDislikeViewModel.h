@class NSString, AWEDCFeedPageContext;

@interface AWEDCFeedCommonLynxDislikeViewModel : NSObject <AWEDCFeedCommonLynxDislikeViewModelProtocol>

@property (weak, nonatomic) AWEDCFeedPageContext *context;
@property (nonatomic) double containerWidth;
@property (nonatomic) double containerHeight;
@property (nonatomic) double panelWidth;
@property (nonatomic) double panelHeight;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cellFrame;
@property (copy, nonatomic) id /* block */ feedbackBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupUIInfo;
- (void).cxx_destruct;

@end
