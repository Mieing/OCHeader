@class NSString;

@interface AFDCloseFriendsMomentVideoTutorialButtonConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long buttonType;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSString *buttonRoutePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
