@class NSString, NSDictionary;

@interface IESLLLiveMessage : NSObject <IESLLLiveMessageProtocol>

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSDictionary *responseData;
@property (readonly, copy, nonatomic) NSString *targetBizId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)messageWithEventName:(id)a0 params:(id)a1 extra:(id)a2;
+ (id)messageWithEventName:(id)a0 params:(id)a1;

- (id)initWithEventName:(id)a0 params:(id)a1 extra:(id)a2;
- (BOOL)exceptTransmitToEventCenter;
- (void).cxx_destruct;
- (void)setResponse:(id)a0;
- (id)getResponse;

@end
