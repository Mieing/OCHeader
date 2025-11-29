@class NSNumber, NSString;

@interface AWELVideoAdSceneModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL open;
@property (retain, nonatomic) NSNumber *adType;
@property (retain, nonatomic) NSNumber *skipAdType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
