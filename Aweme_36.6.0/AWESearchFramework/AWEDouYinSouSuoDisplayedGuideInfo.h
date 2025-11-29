@class NSArray, NSString;

@interface AWEDouYinSouSuoDisplayedGuideInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *itemIDs;
@property (nonatomic) double lastDisplayedTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
