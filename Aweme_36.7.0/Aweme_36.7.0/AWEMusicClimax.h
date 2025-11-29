@class NSNumber, NSString;

@interface AWEMusicClimax : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *startPoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
