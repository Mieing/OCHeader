@class NSString, WCFinderFeedMediaWrap;

@interface WCFinderPriorityTask : NSObject

@property (nonatomic) unsigned long long priority;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long taskIndex;
@property (nonatomic) BOOL isFinished;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) id /* block */ mediaWrapCreateBlock;
@property (copy, nonatomic) NSString *token;
@property (nonatomic) unsigned long long commentScene;
@property (retain, nonatomic) WCFinderFeedMediaWrap *associateMediaWrap;

- (id)initWithIdentifier:(id)a0 priority:(unsigned long long)a1;
- (void).cxx_destruct;

@end
