@class NSString, NSArray;

@interface AWEUGPushActionModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *actionType;
@property (retain, nonatomic) NSArray *messages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
