@class NSString;

@interface AWENearbySearchTransInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *fromVideoID;
@property (copy, nonatomic) NSString *fromRoomID;
@property (copy, nonatomic) NSString *fromPOIID;
@property (copy, nonatomic) NSString *fromProductID;
@property (copy, nonatomic) NSString *fromPageID;
@property (copy, nonatomic) NSString *searchWordInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
