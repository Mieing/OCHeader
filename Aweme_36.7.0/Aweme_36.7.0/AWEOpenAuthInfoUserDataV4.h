@class NSString;

@interface AWEOpenAuthInfoUserDataV4 : MTLModel <MTLJSONSerializing, AWEOpenAuthInfoUserDataProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *screenName;
@property (copy, nonatomic) NSString *avatarUrl;
@property (nonatomic) BOOL flipchatConceal;
@property (nonatomic) BOOL toutiaoConceal;
@property (nonatomic) BOOL weiboConceal;
@property (nonatomic) BOOL wxConceal;
@property (nonatomic) BOOL qqConceal;
@property (nonatomic) BOOL login;
@property (nonatomic) BOOL needBindMobile;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
