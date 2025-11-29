@class NSNumber, NSString, NSDictionary;

@interface IESIMModelLayerNetworkProvider.CodeGenGroupMemberSettingsUpdateNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ groupFeatureValue;
    void /* function */ bizExt;
}

@property (nonatomic, retain) NSNumber *groupId;
@property (nonatomic, retain) NSNumber *groupFeatureId;
@property (nonatomic, copy) NSString *groupFeatureValue;
@property (nonatomic, copy) NSDictionary *bizExt;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
