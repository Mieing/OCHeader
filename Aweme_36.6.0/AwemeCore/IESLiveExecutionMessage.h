@class IESLiveContainerBaseContext, NSString;

@interface IESLiveExecutionMessage : NSObject

@property (retain, nonatomic) IESLiveContainerBaseContext *context;
@property (copy, nonatomic) NSString *messageType;
@property (retain, nonatomic) id messageContent;

+ (id)messageWithContext:(id)a0 messageType:(id)a1 messageContent:(id)a2;

- (id)initWithContext:(id)a0 messageType:(id)a1 messageContent:(id)a2;
- (void).cxx_destruct;

@end
