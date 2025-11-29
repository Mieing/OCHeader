@class NSString;

@interface AWEHPBaseUIControlTask : NSObject

@property (nonatomic) BOOL isActivated;
@property (nonatomic) long long activateNumber;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) BOOL inEffect;
@property (copy, nonatomic) NSString *callerID;
@property (copy, nonatomic) id /* block */ activateHandler;
@property (copy, nonatomic) id /* block */ deactivateHandler;
@property (copy, nonatomic) id /* block */ updateHandler;
@property (copy, nonatomic) id /* block */ deallocHandler;

- (BOOL)comparePriorityWithTask:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)deactivate;
- (BOOL)activate;
- (id)initWithConfig:(id)a0;
- (void)dealloc;

@end
