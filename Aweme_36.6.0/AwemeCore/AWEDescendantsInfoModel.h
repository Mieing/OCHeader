@class NSArray, NSString;

@interface AWEDescendantsInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *platforms;
@property (retain, nonatomic) NSString *notifyMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
