@class NSString;

@interface AWEPassportDeleteBlockModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double applyTime;
@property (nonatomic) double cancelTime;
@property (copy, nonatomic) NSString *avatar;
@property (copy, nonatomic) NSString *token;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
