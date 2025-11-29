@class NSLock, NSMutableDictionary;

@interface IESLLTempoGlobalProps : NSObject

@property (retain, nonatomic) NSMutableDictionary *completeProps;
@property (retain, nonatomic) NSLock *propsLock;

+ (id)sharedInstance;

- (id)getGlobalProps;
- (id)createGlobalProps;
- (void).cxx_destruct;
- (id)init;

@end
