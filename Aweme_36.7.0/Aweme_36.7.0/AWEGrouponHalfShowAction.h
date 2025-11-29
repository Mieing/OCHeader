@class NSString, AWEGrouponLiveWindowModel;

@interface AWEGrouponHalfShowAction : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEGrouponLiveWindowModel *liveModel;
@property (nonatomic) BOOL stayFeedPlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
