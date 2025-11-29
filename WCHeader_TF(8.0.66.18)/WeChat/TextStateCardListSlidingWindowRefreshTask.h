@class NSString, NSArray;

@interface TextStateCardListSlidingWindowRefreshTask : NSObject

@property (retain, nonatomic) NSString *taskId;
@property (retain, nonatomic) NSArray *textStateList;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ getCurrentTextStateId;
@property (nonatomic) BOOL success;

+ (id)textStateListFromJSONObject:(id)a0;

- (id)initWithJSONObject:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
