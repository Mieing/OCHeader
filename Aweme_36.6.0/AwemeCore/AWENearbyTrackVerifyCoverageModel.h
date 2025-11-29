@class NSString;

@interface AWENearbyTrackVerifyCoverageModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *coverString;
@property (nonatomic) long long isStrongCover;
@property (nonatomic) unsigned long long coverType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
