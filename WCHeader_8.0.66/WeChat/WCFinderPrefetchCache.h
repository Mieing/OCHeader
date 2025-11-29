@class NSString, NSData, WXPBGeneratedMessage;

@interface WCFinderPrefetchCache : NSObject <PBCoding>

@property (copy, nonatomic) NSString *requestCls;
@property (retain, nonatomic) NSData *innerRequestData;
@property (copy, nonatomic) NSString *responseCls;
@property (retain, nonatomic) NSData *innerResponseData;
@property (readonly, nonatomic) unsigned long long requestId;
@property (retain, nonatomic) WXPBGeneratedMessage *request;
@property (nonatomic) unsigned long long requestTime;
@property (retain, nonatomic) WXPBGeneratedMessage *response;
@property (nonatomic) unsigned long long responseTime;
@property (nonatomic) unsigned long long expiredTime;
@property (retain, nonatomic) NSData *extraData;
@property (copy, nonatomic) id /* block */ responseBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_requestCls;
+ (void)PBArrayAdd_innerRequestData;
+ (void)PBArrayAdd_requestTime;
+ (void)PBArrayAdd_responseCls;
+ (void)PBArrayAdd_innerResponseData;
+ (void)PBArrayAdd_responseTime;
+ (void)PBArrayAdd_expiredTime;
+ (void)PBArrayAdd_extraData;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
