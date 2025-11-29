@class NSNumber, NSString;

@interface XFeedExtraModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *now;
@property (retain, nonatomic) NSString *logid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
