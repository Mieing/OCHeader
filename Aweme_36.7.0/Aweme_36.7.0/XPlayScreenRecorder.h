@class NSString, NSHashTable;
@protocol XPlayItemProtocol, CGCloudPlayer;

@interface XPlayScreenRecorder : NSObject <XPlayScreenRecordProtocol>

@property (weak, nonatomic) id<XPlayItemProtocol> item;
@property (weak, nonatomic) id<CGCloudPlayer> cloudPlayer;
@property (retain, nonatomic) NSHashTable *screenRecordTasks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createTaskWithModel:(id)a0;
- (id)initWithItem:(id)a0 cloudPlayer:(id)a1;
- (void)handleRecordResult:(id)a0;
- (void).cxx_destruct;
- (id)initWithItem:(id)a0;

@end
