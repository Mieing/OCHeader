@class NSDictionary, IESSoloKTVTemplatePositionModel, NSString;

@interface IESSoloKTVTemplateBaseModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESSoloKTVTemplatePositionModel *position;
@property (nonatomic) int index;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
