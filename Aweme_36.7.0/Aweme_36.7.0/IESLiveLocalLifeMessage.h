@class NSDictionary, IESLiveLocalLifeMessageAggCardOperateInfo, NSString;

@interface IESLiveLocalLifeMessage : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long updateType;
@property (retain, nonatomic) IESLiveLocalLifeMessageAggCardOperateInfo *aggCardOperateInfo;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
