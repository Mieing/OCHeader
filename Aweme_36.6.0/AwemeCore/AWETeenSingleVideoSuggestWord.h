@class NSString;

@interface AWETeenSingleVideoSuggestWord : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *wordID;
@property (copy, nonatomic) NSString *word;
@property (nonatomic) long long icon;
@property (nonatomic) long long source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
