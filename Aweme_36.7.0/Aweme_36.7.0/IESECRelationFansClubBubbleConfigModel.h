@class NSString;

@interface IESECRelationFansClubBubbleConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *bubbleColor;
@property (copy, nonatomic) NSString *promptTextColor;
@property (copy, nonatomic) NSString *promptText;
@property (copy, nonatomic) NSString *jumpTextColor;
@property (copy, nonatomic) NSString *jumpText;
@property (copy, nonatomic) NSString *seperatorColor;
@property (nonatomic) long long showLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
