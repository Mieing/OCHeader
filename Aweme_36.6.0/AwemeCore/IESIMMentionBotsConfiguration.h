@class NSString, NSArray;

@interface IESIMMentionBotsConfiguration : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *cid;
@property (readonly, copy, nonatomic) NSString *solidAiTip;
@property (readonly, nonatomic) BOOL needAddInvite;
@property (readonly, nonatomic) NSArray *roleIds;

- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
