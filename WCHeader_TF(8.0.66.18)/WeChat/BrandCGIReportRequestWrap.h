@class ClickCommandRequest;

@interface BrandCGIReportRequestWrap : NSObject

@property (nonatomic) unsigned int eventID;
@property (retain, nonatomic) ClickCommandRequest *request;
@property (copy, nonatomic) id /* block */ completionBlock;

+ (id)requestWrapWithEventID:(unsigned int)a0 request:(id)a1 completionBlock:(id /* block */)a2;

- (void).cxx_destruct;

@end
