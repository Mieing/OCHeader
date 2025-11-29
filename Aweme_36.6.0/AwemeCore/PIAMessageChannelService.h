@class NSString, PIABiMapTable;

@interface PIAMessageChannelService : NSObject <PIAMessageChannelService>

@property (retain, nonatomic) PIABiMapTable *messagePortMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executePrepareServiceTask;

- (id)initService;
- (void)registerMessagePortEntity:(id)a0 engine:(id)a1;
- (id)getPortEntityWithEngine:(id)a0;
- (void)removePortEntityFromEngine:(id)a0;
- (void).cxx_destruct;

@end
