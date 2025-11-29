@class NSString;

@interface IESECFeedInnerFlowUpArrowView : UIView <IESECContentListLifeCycleProtocol>

@property (nonatomic) BOOL containerAppearStat;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (nonatomic) double customizedBottomPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeight;

@end
