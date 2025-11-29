@class NSString, NSDictionary;

@interface AWESearchAIGCSAMIAssistantTask : NSObject

@property (readonly, copy, nonatomic) NSString *taskID;
@property (readonly, copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *chat;
@property (copy, nonatomic) NSDictionary *trackParams;

- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
