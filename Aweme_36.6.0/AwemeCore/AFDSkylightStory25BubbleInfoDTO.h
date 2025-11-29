@class NSArray, NSString;

@interface AFDSkylightStory25BubbleInfoDTO : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *texts;
@property (copy, nonatomic) NSString *itemID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
