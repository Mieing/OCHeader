@class NSNumber, NSString, NSDictionary;

@interface IESIMModelLayerNetworkProvider.CodeGenGroupActionCheckNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ userOwnerId;
    void /* function */ bizExt;
    void /* function */ bizExtJson;
    void /* function */ params;
}

@property (nonatomic, retain) NSNumber *actionCheckType;
@property (nonatomic, retain) NSNumber *actionCheckSource;
@property (nonatomic, retain) NSNumber *groupType;
@property (nonatomic, retain) NSNumber *conversationShortId;
@property (nonatomic, copy) NSString *userOwnerId;
@property (nonatomic, copy) NSString *bizExt;
@property (nonatomic, copy) NSString *bizExtJson;
@property (nonatomic, copy) NSDictionary *params;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)initWithActionCheckSource:(id)a0 actionCheckType:(id)a1 groupType:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
