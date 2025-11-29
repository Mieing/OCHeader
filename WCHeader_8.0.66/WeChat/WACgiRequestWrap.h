@class WACgiRequest;

@interface WACgiRequestWrap : NSObject

@property (nonatomic) unsigned int eventId;
@property (retain, nonatomic) WACgiRequest *request;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) long long startTimeStamp;

+ (id)requestWrapWithEventId:(unsigned int)a0 request:(id)a1 completion:(id /* block */)a2;

- (void).cxx_destruct;

@end
