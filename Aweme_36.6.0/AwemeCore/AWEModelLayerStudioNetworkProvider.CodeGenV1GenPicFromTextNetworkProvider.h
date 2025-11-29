@class NSString, NSArray, NSNumber;

@interface AWEModelLayerStudioNetworkProvider.CodeGenV1GenPicFromTextNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ text;
    void /* function */ templateIdList;
    void /* function */ timeZone;
}

@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSArray *templateIdList;
@property (nonatomic, copy) NSString *timeZone;
@property (nonatomic, retain) NSNumber *width;
@property (nonatomic, retain) NSNumber *height;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
