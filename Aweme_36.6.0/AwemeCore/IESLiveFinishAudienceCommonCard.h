@class NSString, NSDictionary, NSArray, UIView;
@protocol IESLiveSliceXInstanceInterface;

@interface IESLiveFinishAudienceCommonCard : NSObject <IESLiveSliceXEventForwardDelegate, IESLiveFinishAudiencePageDynamicData>

@property (retain, nonatomic) NSDictionary *data;
@property (retain, nonatomic) id<IESLiveSliceXInstanceInterface> sliceXInstance;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } margins;
@property (copy, nonatomic) NSString *topViewIdentifier;
@property (copy, nonatomic) NSArray *hideViewsIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) id /* block */ onDestoryCallback;
@property (readonly, copy, nonatomic) id /* block */ onHideCallback;
@property (readonly, copy, nonatomic) id /* block */ onShowCallback;
@property (readonly, nonatomic) BOOL ignoreBottomConstraint;

- (void)triggerSliceXEvent:(id)a0;
- (id)initWithData:(id)a0 container:(id)a1;
- (void).cxx_destruct;
- (id)createView;

@end
