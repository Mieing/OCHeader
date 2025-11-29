@class NSString, NSArray, NSDictionary;

@interface TIMXConversationInfoFetchTask : NSObject

@property (retain, nonatomic) NSString *taskId;
@property (retain, nonatomic) NSArray *contexts;
@property (retain, nonatomic) NSDictionary *trimedContexts;
@property (nonatomic) unsigned long long updateType;

+ (id)taskWithType:(unsigned long long)a0 contexts:(id)a1 trimedContexts:(id)a2;

- (void).cxx_destruct;

@end
