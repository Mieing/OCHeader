@class NSString, NSDictionary;

@interface AWEActivityBubbleDataModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *text;
@property (nonatomic) long long showTimes;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
