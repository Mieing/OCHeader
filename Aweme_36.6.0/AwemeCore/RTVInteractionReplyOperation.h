@class NSString, RTVInteractionOperation;
@protocol Optional;

@interface RTVInteractionReplyOperation : JSONModel <RTVInteractionJSONModelProtocol>

@property (nonatomic) long long operationID;
@property (nonatomic) long long replyOperationID;
@property (nonatomic) long long roomID;
@property (nonatomic) long long replyResult;
@property (nonatomic) long long fromUserID;
@property (copy, nonatomic) NSString *replyDataString;
@property (retain, nonatomic) RTVInteractionOperation<Optional> *replyOperation;
@property (readonly, nonatomic) long long source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (id)initWithTargetReplyOperation:(id)a0 result:(BOOL)a1 externBusinessData:(id)a2;
- (void)setupReplyOperation:(id)a0;
- (void)updateSource:(long long)a0;
- (id)contentDynamicCast:(Class)a0;
- (void).cxx_destruct;

@end
