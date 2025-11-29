@class NSArray, NSString, AWESearchImagePrefetchSceneConfigV2;

@interface AWESearchImagePrefetchConfigV2 : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWESearchImagePrefetchSceneConfigV2 *single;
@property (retain, nonatomic) AWESearchImagePrefetchSceneConfigV2 *dual;
@property (copy, nonatomic) NSArray *singleCardIdList;
@property (copy, nonatomic) NSArray *dualCardIdList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
