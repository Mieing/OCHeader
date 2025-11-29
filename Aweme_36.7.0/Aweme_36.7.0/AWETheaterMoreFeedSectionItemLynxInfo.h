@class NSString;
@protocol HunterPreserveDataManagerProtocol;

@interface AWETheaterMoreFeedSectionItemLynxInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) id<HunterPreserveDataManagerProtocol> preserveDataManager;
@property (nonatomic) double height;
@property (copy, nonatomic) NSString *rawData;
@property (copy, nonatomic) NSString *lynxSchema;
@property (nonatomic) long long schemaType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)preserveDataManager;
- (void)setPreserveDataManager:(id)a0;
- (void).cxx_destruct;

@end
