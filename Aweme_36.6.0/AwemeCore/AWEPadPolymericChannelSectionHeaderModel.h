@class NSString, AWEPadPolymericChannelSectionHeaderExtraModel;

@interface AWEPadPolymericChannelSectionHeaderModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long headerType;
@property (retain, nonatomic) NSString *headerTitle;
@property (nonatomic) long long rightLabelType;
@property (retain, nonatomic) NSString *rightLabelSchema;
@property (retain, nonatomic) AWEPadPolymericChannelSectionHeaderExtraModel *extraModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extraModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isUnavailable;

@end
