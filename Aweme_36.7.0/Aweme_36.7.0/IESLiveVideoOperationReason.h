@class NSString, NSSet, NSDictionary;

@interface IESLiveVideoOperationReason : NSObject

@property (nonatomic) long long role;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSSet *bizTags;
@property (copy, nonatomic) NSDictionary *bizContext;
@property (copy, nonatomic) NSString *callClassName;
@property (copy, nonatomic) NSString *callMethodName;
@property (copy, nonatomic) NSString *cert;

- (id)initWithSource:(id)a0 role:(long long)a1 cert:(id)a2 bizTags:(id)a3 bizContext:(id)a4 callerCls:(id)a5 callerSel:(id)a6;
- (void).cxx_destruct;
- (id)description;

@end
