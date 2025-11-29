@class NSNumber, NSString, AWEIncentiveDYPendantStayPopupModel;

@interface AWEIncentiveDYPendantDelConfModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *canDelete;
@property (retain, nonatomic) NSNumber *delInteractionStyle;
@property (retain, nonatomic) AWEIncentiveDYPendantStayPopupModel *stayPopup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stayPopupJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
