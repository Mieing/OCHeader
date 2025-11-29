@class NSArray, NSString, NSDictionary;

@interface AWEActivityCapsuleDataModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *text;
@property (retain, nonatomic) NSString *textColor;
@property (retain, nonatomic) NSString *edgeColor;
@property (retain, nonatomic) NSString *backGroundColor;
@property (nonatomic) long long textFlip;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
