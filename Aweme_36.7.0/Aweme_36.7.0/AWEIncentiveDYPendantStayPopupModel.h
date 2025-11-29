@class NSString, AWEIncentiveDYPendantButtonModel;

@interface AWEIncentiveDYPendantStayPopupModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *descText;
@property (retain, nonatomic) AWEIncentiveDYPendantButtonModel *leftButton;
@property (retain, nonatomic) AWEIncentiveDYPendantButtonModel *rightButton;
@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)leftButtonJSONTransformer;
+ (id)rightButtonJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
