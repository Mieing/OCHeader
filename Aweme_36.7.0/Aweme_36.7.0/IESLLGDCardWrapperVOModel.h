@class NSString, IESLLGDGrouponDetailActionInfo;

@interface IESLLGDCardWrapperVOModel : MTLModel <MTLJSONSerializing, IESLLGDGrouponDetailActionProtocol>

@property (nonatomic) unsigned long long mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) IESLLGDGrouponDetailActionInfo *actionInfos;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
