@class NSString, NSArray, NSLock, NSMutableArray;

@interface BDXGurdSyncTask : NSObject

@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSArray *channelsArray;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) id /* block */ completion;
@property long long state;
@property (retain, nonatomic) NSLock *allCompletionsLock;
@property (retain, nonatomic) NSMutableArray *allCompletions;
@property (copy, nonatomic) NSString *businessDomain;
@property (nonatomic) unsigned long long options;
@property (nonatomic) long long pollingPriority;
@property (nonatomic) long long downloadPriority;
@property (nonatomic) long long modelActivePolicy;
@property (readonly, getter=isExecuting) BOOL executing;
@property (nonatomic) BOOL disableThrottle;
@property (readonly, nonatomic) BOOL forceRequest;
@property (copy, nonatomic) NSString *geckoTag;

+ (id)taskWithAccessKey:(id)a0 groupName:(id)a1 channelsArray:(id)a2 completion:(id /* block */)a3;

- (void)addCompletionOfTask:(id)a0;
- (BOOL)isEqualToTask:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)callCompletionsWithResult:(id)a0;

@end
