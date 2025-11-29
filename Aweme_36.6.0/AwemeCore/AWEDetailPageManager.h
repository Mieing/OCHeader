@class NSOperationQueue, NSMutableDictionary, NSString;

@interface AWEDetailPageManager : NSObject <AWEDetailPageManagerProtocol>

@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSMutableDictionary *shootSameOperationsMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)detailPageTypeInStringFormatWith:(unsigned long long)a0;
+ (id)sharedInstance;

- (id)commonExtraInfoForRequestingShootSameSchema:(id)a0;
- (id)readShootSameOperationWithIdentify:(id)a0;
- (void)deleteShootSameOperationWithIdentify:(id)a0;
- (void)trackShootSameResultWith:(id)a0 requestModel:(id)a1 error:(id)a2 duration:(double)a3;
- (void)writeShootSameOperation:(id)a0 identify:(id)a1;
- (id)startRequestShootSameSchemaWithRequestModel:(id)a0 priority:(long long)a1 completion:(id /* block */)a2;
- (id)startRequestShootSameSchemaForMusicDetailWithAwemeModel:(id)a0 activityMobDic:(id)a1 extraInfo:(id)a2 priority:(long long)a3 completion:(id /* block */)a4;
- (id)startRequestShootSameSchemaForTrendDetailWithAwemeModel:(id)a0 activityMobDic:(id)a1 extraInfo:(id)a2 priority:(long long)a3 completion:(id /* block */)a4;
- (void)cancelShootSameSchemaOperationWithIdentify:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
