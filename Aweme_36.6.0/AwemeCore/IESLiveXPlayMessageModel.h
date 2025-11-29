@class NSDictionary, NSString, IESLiveXPlayMessageBody;

@interface IESLiveXPlayMessageModel : NSObject

@property (copy, nonatomic) NSDictionary *originDict;
@property (copy, nonatomic) NSString *action;
@property (nonatomic) long long ts;
@property (retain, nonatomic) IESLiveXPlayMessageBody *body;

+ (id)messageModelWithMessageString:(id)a0;

- (id)serializeMessageModelToJsonString;
- (void).cxx_destruct;

@end
