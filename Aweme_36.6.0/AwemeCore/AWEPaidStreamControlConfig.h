@class NSString, NSDictionary, AWEAwemeModel, UIView;
@protocol AWEPaidStreamControlDelegate;

@interface AWEPaidStreamControlConfig : NSObject

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (weak, nonatomic) id<AWEPaidStreamControlDelegate> paidStreamControlDelegate;
@property (weak, nonatomic) UIView *belowView;
@property (weak, nonatomic) UIView *aboveView;
@property (nonatomic) long long subviewIndex;
@property (weak, nonatomic) UIView *trialContainerView;
@property (copy, nonatomic) NSString *trialFinishTitle;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } blockViewFrame;
@property (nonatomic) BOOL needsShowPurchaseButton;
@property (nonatomic) BOOL needsStopForEnteringBackground;
@property (nonatomic) BOOL needsStopForResigningActive;
@property (nonatomic) BOOL forbidBlock;
@property (nonatomic) BOOL forbidSecurity;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) double offsetFromCenter;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (nonatomic) long long enlargeType;
@property (nonatomic, getter=isUseRTSBlockView) BOOL useRTSBlockView;

- (void).cxx_destruct;
- (id)init;

@end
