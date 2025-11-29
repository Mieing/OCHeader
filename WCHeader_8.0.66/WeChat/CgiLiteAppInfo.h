@class NSString;

@interface CgiLiteAppInfo : NSObject <YYModel>

@property (retain, nonatomic) NSString *itemId;
@property (nonatomic) unsigned long long eventTime;
@property (retain, nonatomic) NSString *sourcePageJson;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *dataJson;
@property (retain, nonatomic) NSString *eventId;
@property (retain, nonatomic) NSString *curPageJson;
@property (retain, nonatomic) NSString *refPageJson;
@property (nonatomic) unsigned int itemType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)checkCanReort;
- (int)checkIsWqBatch;
- (void).cxx_destruct;

@end
