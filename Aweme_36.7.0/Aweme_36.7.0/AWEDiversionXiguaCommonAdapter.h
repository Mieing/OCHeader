@class NSString;

@interface AWEDiversionXiguaCommonAdapter : AWEDiversionXiguaCommonAdapterDefault <AWEDiversionXiguaCommonAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;

- (id)openZlinkForXiguaCommonBar;
- (id)openGdLabelForXiguaCommonBar;
- (id)openZlinkForRelatedDetailCrossFlowFromCommonBar;
- (id)openGdLabelForRelatedDetailCrossFlowFromCommonBar;
- (id)downloadZlinkForRelatedDetailCrossFlowFromCommonBar;
- (id)downloadGdLabelForRelatedDetailCrossFlowFromCommonBar;
- (id)weakTarget;

@end
