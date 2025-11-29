@class NSString, NSData;

@interface SAMICore_HttpCommonContextResponseBody : NSObject

@property (nonatomic) int statusCode;
@property (retain, nonatomic) NSString *statusText;
@property (retain, nonatomic) NSString *taskId;
@property (retain, nonatomic) NSString *apiNamespace;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) long long payloadType;
@property (retain, nonatomic) id payload;

- (void)dealloc;

@end
