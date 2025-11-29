@class IESECInternalFlowMainCardStyleModel, IESECInternalFlowFeedCardStyleModel, NSString, IESECInternalFlowPageStyleModel;

@interface IESECInternalFeedStyleModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECInternalFlowPageStyleModel *innerFlowPageStyle;
@property (retain, nonatomic) IESECInternalFlowMainCardStyleModel *innerFlowMainPageStyle;
@property (retain, nonatomic) IESECInternalFlowFeedCardStyleModel *innerFlowFeedPageStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
