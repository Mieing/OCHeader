@class NSString, AWEURLModel;

@interface AWENearbyC2HeaderToolItemRedDotAnimation : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *image;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long liveSeconds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
