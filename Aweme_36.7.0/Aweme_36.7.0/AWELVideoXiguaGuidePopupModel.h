@class NSString, NSNumber;

@interface AWELVideoXiguaGuidePopupModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *jumpConfirmTitle;
@property (retain, nonatomic) NSNumber *closeControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
