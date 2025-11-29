@class NSString;

@interface IESLLPendantBizData : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *lifePendantLynxData;
@property (retain, nonatomic) NSString *lifePendantLynxUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
