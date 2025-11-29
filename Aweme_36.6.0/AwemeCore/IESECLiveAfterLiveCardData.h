@class NSString, NSArray, UIView;

@interface IESECLiveAfterLiveCardData : NSObject <IESLiveFinishAudiencePageDynamicData>

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

- (void).cxx_destruct;

@end
