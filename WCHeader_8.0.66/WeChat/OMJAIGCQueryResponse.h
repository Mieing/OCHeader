@class NSString, NSData, NSArray;

@interface OMJAIGCQueryResponse : NSObject

@property (copy, nonatomic) NSString *taskID;
@property (nonatomic) unsigned long long resultCode;
@property (nonatomic) BOOL isFinished;
@property (retain, nonatomic) NSData *contextData;
@property (nonatomic) unsigned int queryIntervalMS;
@property (copy, nonatomic) NSArray *assets;

- (id)initWithTaskID:(id)a0 resultCode:(unsigned long long)a1;
- (id)initWithTaskID:(id)a0 resultCode:(unsigned long long)a1 isFinished:(BOOL)a2 contextData:(id)a3 queryIntervalMS:(unsigned int)a4 assets:(id)a5;
- (void).cxx_destruct;

@end
