@class NSString, VEColorSpaceInfo;

@interface VEFeatureHandleParameters : NSObject

@property (retain, nonatomic) NSString *resPath;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) VEColorSpaceInfo *colorSpaceInfo;
@property (nonatomic) unsigned long long featureType;

- (void).cxx_destruct;

@end
