@class NSString;

@interface AWEIMChatThemeBubbleModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *gradientColorStart;
@property (copy, nonatomic) NSString *gradientColorEnd;
@property (copy, nonatomic) NSString *ltIconURL;
@property (copy, nonatomic) NSString *rtIconURL;
@property (copy, nonatomic) NSString *lbIconURL;
@property (copy, nonatomic) NSString *rbIconURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)strictIdentifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
