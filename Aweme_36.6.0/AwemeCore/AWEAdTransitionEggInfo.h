@class NSString, AWEURLModel;

@interface AWEAdTransitionEggInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *imageUrl;
@property (nonatomic) long long openTime;
@property (copy, nonatomic) NSString *imageName;
@property (nonatomic) long long totalTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
