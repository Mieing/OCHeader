@class NSNumber, NSString;

@interface AWEDouplusIconModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *itemID;
@property (nonatomic) BOOL iconLimit;
@property (retain, nonatomic) NSNumber *topicID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
