@class NSString, IESECLiveListBottomGuideModel;

@interface IESECLiveListBottomModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *bottomTitle;
@property (retain, nonatomic) NSString *bottomEndTitle;
@property (retain, nonatomic) IESECLiveListBottomGuideModel *bottomGuideInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
