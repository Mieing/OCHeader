@class NSString, NSNumber;

@interface AWEUserProfileAdVideoSlotModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSNumber *IDType;
@property (retain, nonatomic) NSNumber *adID;
@property (nonatomic) BOOL needInsert;
@property (nonatomic) BOOL canPostInInitialRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
