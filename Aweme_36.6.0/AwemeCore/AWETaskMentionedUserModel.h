@class NSString;

@interface AWETaskMentionedUserModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *uID;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *secUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
