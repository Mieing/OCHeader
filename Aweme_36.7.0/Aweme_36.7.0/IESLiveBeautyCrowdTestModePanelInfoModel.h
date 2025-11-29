@class NSString;

@interface IESLiveBeautyCrowdTestModePanelInfoModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *panel;
@property (nonatomic) long long abGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
