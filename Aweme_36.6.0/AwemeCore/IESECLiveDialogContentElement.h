@class NSArray, NSString;

@interface IESECLiveDialogContentElement : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)textJSONTransformer;

- (id)getDialogContentString;
- (void).cxx_destruct;

@end
