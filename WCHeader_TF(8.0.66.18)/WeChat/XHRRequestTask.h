@class NSString, NSData, NSDictionary;
@protocol XHRRequestTaskDelegate, WKURLSchemeTask;

@interface XHRRequestTask : NSObject

@property (nonatomic) BOOL finished;
@property (weak, nonatomic) id<XHRRequestTaskDelegate> delegate;
@property (retain, nonatomic) id<WKURLSchemeTask> task;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSDictionary *headerFields;
@property (readonly, nonatomic) int workerId;
@property (nonatomic) BOOL async;
@property (nonatomic) BOOL stopped;
@property (copy, nonatomic) id /* block */ iOS16StringFixBlock;

- (id)initWith:(id)a0;
- (void)responseWith:(id)a0 data:(id)a1 mime:(id)a2 customHeaders:(id)a3;
- (void)responseWith:(id)a0 apiResult:(id)a1 data:(id)a2 mime:(id)a3;
- (void).cxx_destruct;

@end
