@class NSNumber, NSString;

@interface AWEAwemePreloadModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *commentPreloadTime;
@property (nonatomic) long long profilePreloadTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
