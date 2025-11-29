@class NSString, NSArray, NSDictionary, NSNumber;

@interface AWEIMGroupNoticeUserModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *userID;
@property (retain, nonatomic) NSString *userSecID;
@property (retain, nonatomic) NSString *nickname;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (retain, nonatomic) NSString *localName;
@property (copy, nonatomic) NSArray *roleIds;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)p_enableFixRoleIdError;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
