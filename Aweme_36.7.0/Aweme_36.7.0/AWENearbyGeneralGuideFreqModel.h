@class NSString;

@interface AWENearbyGeneralGuideFreqModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *freqKey;
@property (nonatomic) long long freqTimeY;
@property (nonatomic) long long freqCountX;
@property (nonatomic) unsigned long long freqOption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
