@class NSString;

@interface AWEGDPointComment : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *avatar;
@property (copy, nonatomic) NSString *comment;
@property (copy, nonatomic) NSString *user_nick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
