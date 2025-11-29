@class NSNumber, AWEInnerPushControlModel, UIView;

@interface AWEMarketingCustomInnerPushModel : NSObject

@property (retain, nonatomic) UIView *mainView;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (copy, nonatomic) NSNumber *stayTime;
@property (retain, nonatomic) AWEInnerPushControlModel *pushControlModel;
@property (copy, nonatomic) id /* block */ showBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ getInteractorBlock;

- (void).cxx_destruct;

@end
