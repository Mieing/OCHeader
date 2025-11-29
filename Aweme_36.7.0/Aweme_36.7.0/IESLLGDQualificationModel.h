@class NSString, IESLLGDGrouponDetailActionInfo;

@interface IESLLGDQualificationModel : MTLModel <MTLJSONSerializing, IESLLGDComponentWrapperProtocol, IESLLGDGrouponDetailActionProtocol>

@property (copy, nonatomic) NSString *qualificationDesc;
@property (copy, nonatomic) NSString *qualificationJumpDesc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long marginTop;
@property (nonatomic) long long marginBottom;
@property (copy, nonatomic) IESLLGDGrouponDetailActionInfo *actionInfos;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
