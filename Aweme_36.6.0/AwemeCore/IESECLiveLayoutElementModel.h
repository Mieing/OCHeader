@class IESECLiveElementDesignInfo, NSString, IESECLiveElementConstraintInfo, NSNumber;

@interface IESECLiveLayoutElementModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *elementName;
@property (retain, nonatomic) IESECLiveElementConstraintInfo *elementConstraintInfo;
@property (retain, nonatomic) IESECLiveElementConstraintInfo *elementLayout;
@property (retain, nonatomic) IESECLiveElementDesignInfo *designInfo;
@property (retain, nonatomic) NSNumber *visibility;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
