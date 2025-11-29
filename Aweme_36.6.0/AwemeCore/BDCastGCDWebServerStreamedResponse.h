@class NSString;

@interface BDCastGCDWebServerStreamedResponse : BDCastGCDWebServerResponse {
    id /* block */ _block;
}

@property (copy, nonatomic) NSString *contentType;

+ (id)responseWithContentType:(id)a0 streamBlock:(id /* block */)a1;
+ (id)responseWithContentType:(id)a0 asyncStreamBlock:(id /* block */)a1;

- (void)asyncReadDataWithCompletion:(id /* block */)a0;
- (id)initWithContentType:(id)a0 streamBlock:(id /* block */)a1;
- (id)initWithContentType:(id)a0 asyncStreamBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)description;

@end
