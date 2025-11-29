@class NSString, NSNumber;

@interface AWEModelLayerStudioNetworkProvider.CodeGenV1AiSelectTaskNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ taskId;
    void /* function */ taskGroupId;
}

@property (nonatomic, copy) NSString *taskId;
@property (nonatomic, copy) NSString *taskGroupId;
@property (nonatomic, retain) NSNumber *operateTaskType;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
