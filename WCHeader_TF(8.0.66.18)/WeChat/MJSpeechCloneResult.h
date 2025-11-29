@class NSString, NSDictionary;

@interface MJSpeechCloneResult : MJSpeechRequestResult

@property (readonly, nonatomic) NSString *roleID;
@property (readonly, nonatomic) NSDictionary *extraInfos;

- (id)initWithRoleID:(id)a0 extraInfos:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
