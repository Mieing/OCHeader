@class NSString;
@protocol XPlayScreenRecordTaskDelegate, XPlayItemProtocol;

@interface XPlayScreenRecordTask : NSObject <XPlayScreenRecordTask>

@property (weak, nonatomic) id<XPlayScreenRecordTaskDelegate> delegate;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSString *logId;
@property (weak, nonatomic) id<XPlayItemProtocol> item;
@property (copy, nonatomic) NSString *recordId;
@property (nonatomic) long long bitRate;
@property (nonatomic) long long quality;
@property (nonatomic) long long maxRecordTime;
@property (nonatomic) long long startRecordTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didCompletion:(id)a0;
- (id)initWithItem:(id)a0 model:(id)a1;
- (void).cxx_destruct;
- (void)stop;
- (void)start;

@end
