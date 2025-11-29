@class NSString, NSNumber;

@interface AWESearchFullScreenAdEggPreloadModel : MTLModel <MTLJSONSerializing, NSCoding>

@property (copy, nonatomic) NSString *materialURL;
@property (copy, nonatomic) NSString *materialURI;
@property (nonatomic) long long materialType;
@property (retain, nonatomic) NSNumber *effectiveEndTime;
@property (retain, nonatomic) NSNumber *effectiveStartTime;
@property (copy, nonatomic) NSString *creativeID;
@property (copy, nonatomic) NSString *dataResourcePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
