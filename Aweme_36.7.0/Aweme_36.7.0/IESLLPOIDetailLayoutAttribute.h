@class NSString, NSNumber, UIView;
@protocol IESLLPOIDetailInfoViewModelProtocol;

@interface IESLLPOIDetailLayoutAttribute : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSNumber *dynamicId;
@property (nonatomic) long long showDelay;
@property (nonatomic) BOOL needUpdate;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } itemMargin;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } itemPadding;
@property (nonatomic) double cardCornerRadius;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) unsigned long long showType;
@property (retain, nonatomic) UIView *layoutContainer;
@property (retain, nonatomic) id<IESLLPOIDetailInfoViewModelProtocol> viewModel;
@property (nonatomic) BOOL isInitialized;

- (BOOL)p_shouldExpose;
- (void)p_handleExposeWithShowType:(unsigned long long)a0;
- (void)onPartlyDisappear;
- (void)onCompleteAppear;
- (void).cxx_destruct;
- (void)onDisappear;
- (void)onAppear;

@end
