@class NSMutableSet, WXPBGeneratedMessage;

@interface MMECOrderBaseCgi : WCBaseCgi {
    WXPBGeneratedMessage *_request;
}

@property (nonatomic) double startTime;
@property (nonatomic, getter=isCancelTask) BOOL cancelTask;
@property (retain, nonatomic) NSMutableSet *baseProcessingToastErrorCodeSet;

+ (id)baseProcessingToastErrorCodeSet;
+ (BOOL)shouldAutoProcessingToastWithErrorCode:(long long)a0;

- (void)start;
- (void)setRequest:(id)a0;
- (id)customSuccessfulRetCodeArray;
- (BOOL)shouldAutoProcessingToastWithError:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void)orderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void)didGetResponse:(id)a0;
- (id)cgiIdKeyDict;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)cancel;
- (id)request;
- (void).cxx_destruct;

@end
