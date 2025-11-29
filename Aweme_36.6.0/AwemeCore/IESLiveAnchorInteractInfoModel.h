@class NSString, NSDictionary, HTSInteractStreamContent, NSNumber;

@interface IESLiveAnchorInteractInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *isHorizontal;
@property (retain, nonatomic) NSNumber *layoutType;
@property (copy, nonatomic) NSNumber *layoutRange;
@property (copy, nonatomic) NSString *focusId;
@property (copy, nonatomic) NSNumber *scaleType;
@property (copy, nonatomic) NSNumber *alignMode;
@property (retain, nonatomic) NSNumber *ownerIndex;
@property (retain, nonatomic) NSNumber *mixOwnerIndex;
@property (retain, nonatomic) NSNumber *uiLayout;
@property (retain, nonatomic) HTSInteractStreamContent *content;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
