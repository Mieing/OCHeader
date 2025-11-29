@class NSString, IESECLiveTrackConfigModel, IESECLiveImageURLModel;

@interface IESECLiveListHeaderSearchHintWordInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *hintWord;
@property (retain, nonatomic) IESECLiveImageURLModel *hintIcon;
@property (retain, nonatomic) IESECLiveTrackConfigModel *showTrackInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
