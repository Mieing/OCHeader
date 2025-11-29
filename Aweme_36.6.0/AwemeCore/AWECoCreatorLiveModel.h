@class NSNumber, NSString, NSDictionary;

@interface AWECoCreatorLiveModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *roomID;
@property (nonatomic) long long liveStatus;
@property (copy, nonatomic) NSString *roomData;
@property (copy, nonatomic) NSDictionary *roomDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)roomDictJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
