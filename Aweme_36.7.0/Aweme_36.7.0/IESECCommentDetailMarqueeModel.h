@class NSString;

@interface IESECCommentDetailMarqueeModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *userAvatar;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *marqueeMessage;
@property (nonatomic) long long messageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
