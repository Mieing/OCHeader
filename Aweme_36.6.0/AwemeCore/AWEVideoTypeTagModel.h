@class NSString;

@interface AWEVideoTypeTagModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long tagID;
@property (copy, nonatomic) NSString *tagName;
@property (nonatomic) long long level;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
