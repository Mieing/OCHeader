@class NSString, NSData;

@interface OMJAIGCSubmitResponse : NSObject

@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) unsigned long long resultCode;
@property (copy, nonatomic) NSString *taskID;
@property (retain, nonatomic) NSData *contextData;
@property (nonatomic) unsigned int queryIntervalMS;

- (id)initWithRequestID:(id)a0 resultCode:(unsigned long long)a1;
- (id)initWithRequestID:(id)a0 resultCode:(unsigned long long)a1 taskID:(id)a2 contextData:(id)a3 queryIntervalMS:(unsigned int)a4;
- (void).cxx_destruct;

@end
