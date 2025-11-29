@class HTSLiveGiftSyncModel;

@interface IESLiveEffectsDownloadNode : NSObject

@property (retain, nonatomic) HTSLiveGiftSyncModel *syncModel;
@property (copy, nonatomic) id /* block */ syncModelDownloadCallback;
@property (nonatomic) long long fetchMomentType;
@property (nonatomic) unsigned long long downloadPriority;

- (id)initWithSyncModel:(id)a0 fetchMomentType:(long long)a1 downloadPriority:(unsigned long long)a2 syncModelDownloadCallback:(id /* block */)a3;
- (void).cxx_destruct;

@end
