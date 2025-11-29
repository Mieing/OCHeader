@class NSString;

@interface AWEVideoSpecificTagModel : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) long long tagID;
@property (retain, nonatomic) NSString *tagName;
@property (readonly, nonatomic) long long tagLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
