@class NSString, IESGCPCGOSDKMessageBody, NSDictionary;

@interface IESGCPCGOSDKMessageModel : NSObject

@property (copy, nonatomic) NSString *action;
@property (retain, nonatomic) IESGCPCGOSDKMessageBody *body;
@property (copy, nonatomic) NSDictionary *originDict;
@property (nonatomic) BOOL isDataPlain;
@property (nonatomic) BOOL isBodyPlain;

+ (id)messageWithAction:(id)a0 bodyType:(id)a1 data:(id)a2;
+ (id)messageModelWithMessageString:(id)a0;

- (id)toJson;
- (void).cxx_destruct;

@end
