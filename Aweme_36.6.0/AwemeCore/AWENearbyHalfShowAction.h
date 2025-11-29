@class AWENearbyLiveWindowModel, NSString;

@interface AWENearbyHalfShowAction : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWENearbyLiveWindowModel *liveModel;
@property (nonatomic) BOOL stayFeedPlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
