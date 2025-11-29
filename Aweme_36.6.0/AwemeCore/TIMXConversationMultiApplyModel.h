@class NSArray, NSString;

@interface TIMXConversationMultiApplyModel : MTLModel <TIMXConversationMultiApplyModelProtocol>

@property (copy, nonatomic) NSArray *multiApplyList;
@property (copy, nonatomic) NSString *statusMessage;
@property (copy, nonatomic) NSString *logId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithApplyModelArray:(id)a0 statusMessage:(id)a1 logId:(id)a2;
- (void).cxx_destruct;

@end
