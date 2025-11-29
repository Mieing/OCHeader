@class NSString, NSArray;

@interface AWEPublishAssistantResponse : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL hasDone;
@property (nonatomic) BOOL isHit;
@property (copy, nonatomic) NSString *bottomText;
@property (copy, nonatomic) NSString *popUpText;
@property (copy, nonatomic) NSArray *hitModelNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
