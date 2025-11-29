@class NSString, NSArray;

@interface AWEAwemeSearchTextCopyModel : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) BOOL hasTextExtraction;
@property (readonly, copy, nonatomic) NSString *buttonText;
@property (readonly, nonatomic) long long showDelayTime;
@property (copy, nonatomic) NSArray *contents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
