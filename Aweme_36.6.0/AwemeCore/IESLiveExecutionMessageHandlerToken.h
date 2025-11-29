@class NSString;

@interface IESLiveExecutionMessageHandlerToken : NSObject

@property (readonly, copy, nonatomic) NSString *messageType;
@property (readonly, copy, nonatomic) NSString *identifier;

- (id)initWithMessageType:(id)a0 identifier:(id)a1;
- (void).cxx_destruct;

@end
