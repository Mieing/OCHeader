@class NSString;

@interface AWEOpenAuthInfoFollowDataV4 : MTLModel <MTLJSONSerializing, AWEOpenAuthInfoFollowDataProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *toUserId;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) BOOL showSelection;
@property (nonatomic) BOOL defaultSelect;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
