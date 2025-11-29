@interface WCFinderOplogModUserInfoCGIHandler : NSObject

@property (retain, nonatomic) Class respoClass;
@property (copy, nonatomic) id /* block */ callback;

+ (id)handlerWithRespClass:(Class)a0 handler:(id /* block */)a1;

- (void).cxx_destruct;

@end
