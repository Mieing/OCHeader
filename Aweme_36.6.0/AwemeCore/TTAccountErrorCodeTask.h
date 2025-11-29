@class NSString;

@interface TTAccountErrorCodeTask : NSObject <TTAccountErrorCodeTask>

@property (nonatomic) long long errorCode;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *info;
@property (copy, nonatomic) NSString *detail;
@property (copy, nonatomic) id /* block */ taskHandledCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithError:(id)a0;

@end
