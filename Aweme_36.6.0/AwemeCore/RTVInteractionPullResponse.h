@class NSArray;
@protocol RTVInteractionReplyOperationNotify, RTVInteractionOperationNotify;

@interface RTVInteractionPullResponse : JSONModel

@property (nonatomic) long long roomID;
@property (copy, nonatomic) NSArray<RTVInteractionOperationNotify> *operations;
@property (copy, nonatomic) NSArray<RTVInteractionReplyOperationNotify> *replyOperations;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
