@class NSString, IESLLGDGrouponDetailActionInfo;

@interface IESLLGDImageDetailModel : MTLModel <MTLJSONSerializing, IESLLGDComponentWrapperProtocol, IESLLGDGrouponDetailActionProtocol>

@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *descText;
@property (nonatomic) unsigned long long radiusMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long marginTop;
@property (nonatomic) long long marginBottom;
@property (copy, nonatomic) IESLLGDGrouponDetailActionInfo *actionInfos;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
