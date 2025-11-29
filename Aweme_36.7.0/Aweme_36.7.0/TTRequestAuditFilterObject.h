@class NSString;

@interface TTRequestAuditFilterObject : NSObject

@property (copy, nonatomic) NSString *requestFilterName;
@property (copy, nonatomic) id /* block */ requestAuditFilterBlock;

- (id)initWithName:(id)a0 requestAuditFilterBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
