@class NSString, AWEGDGrouponDetailActionInfo;

@interface AWEGDCardWrapperVOModel : MTLModel <MTLJSONSerializing, AWEGDGrouponDetailActionProtocol>

@property (nonatomic) unsigned long long mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) AWEGDGrouponDetailActionInfo *actionInfos;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
