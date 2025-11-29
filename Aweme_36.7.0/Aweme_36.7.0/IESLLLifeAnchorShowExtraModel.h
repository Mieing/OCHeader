@class NSString;

@interface IESLLLifeAnchorShowExtraModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long anchorType;
@property (nonatomic) BOOL shouldShow;
@property (nonatomic) BOOL hasAnchorInfo;
@property (copy, nonatomic) NSString *anchorNotShowReason;
@property (copy, nonatomic) NSString *commerceFilterReason;
@property (copy, nonatomic) NSString *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
