@class NSString, AWEURLModel;

@interface AWEGrouponActivityEntranceDynamicImageModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *image;
@property (nonatomic) double startDelay;
@property (nonatomic) long long playTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
