@class NSArray, NSString;

@interface TIMXOConversationMultiApplyModel : NSObject <IESIMConversationMultiApplyModelProtocol>

@property (readonly, copy, nonatomic) NSArray *applyModelArray;
@property (readonly, copy, nonatomic) NSString *statusMessage;
@property (readonly, copy, nonatomic) NSString *logId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *applyModelArray;
@property (readonly, copy, nonatomic) NSString *statusMessage;
@property (readonly, copy, nonatomic) NSString *logId;

+ (id)createFromModel:(id)a0;

- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
