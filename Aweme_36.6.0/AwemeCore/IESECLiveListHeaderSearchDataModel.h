@class NSString, IESECLiveListHeaderSearchBarInfo;

@interface IESECLiveListHeaderSearchDataModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECLiveListHeaderSearchBarInfo *searchBarInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
