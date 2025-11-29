@class NSString, NSDictionary;

@interface AWEIMSchoolGroupCreateGroupContext : NSObject

@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *avatarURLString;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *createType;
@property (copy, nonatomic) NSString *groupDesc;
@property (copy, nonatomic) NSString *createSource;
@property (copy, nonatomic) NSString *idempotentIdentifier;
@property (copy, nonatomic) NSDictionary *bizExt;
@property (copy, nonatomic) NSDictionary *extraDict;
@property (copy, nonatomic) id /* block */ createCompletion;

- (id)initWithParamDict:(id)a0;
- (void).cxx_destruct;

@end
