@class NSString;

@interface AWEDTONonCompileShareInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *coverTos;
@property (nonatomic) long long coverWidth;
@property (nonatomic) long long coverHeight;
@property (copy, nonatomic) NSString *validReusedVid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
