@class NSString;

@interface RTVHTTPErrorMessage : NSObject <RxHTTPErrorMessage>

@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, nonatomic) long long code;
@property (readonly, copy, nonatomic) NSString *actionSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMessage:(id)a0 code:(long long)a1 actionSchema:(id)a2;
- (void).cxx_destruct;

@end
