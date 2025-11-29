@class NSString;

@interface AWEMVChannelRecallReason : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textSuffix;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *darkUrl;
@property (copy, nonatomic) NSString *bgColor;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) double playProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
