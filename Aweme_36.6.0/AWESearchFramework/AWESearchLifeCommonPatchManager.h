@class NSMutableDictionary;

@interface AWESearchLifeCommonPatchManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *dataDic;
@property (retain, nonatomic) NSMutableDictionary *callBackDic;

- (void)updateData:(id)a0 forDataID:(id)a1;
- (void)getDataWithDataID:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)clearLocalCache;

@end
