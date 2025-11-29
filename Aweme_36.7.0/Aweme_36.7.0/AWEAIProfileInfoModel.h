@class NSString, NSNumber;

@interface AWEAIProfileInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *formatID;
@property (copy, nonatomic) NSString *formatOwnerID;
@property (copy, nonatomic) NSNumber *formatImBotId;
@property (copy, nonatomic) NSString *formatNewImBotId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
