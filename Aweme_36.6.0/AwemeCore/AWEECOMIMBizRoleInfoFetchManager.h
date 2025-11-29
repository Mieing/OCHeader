@class NSMutableDictionary;

@interface AWEECOMIMBizRoleInfoFetchManager : NSObject

@property (retain) NSMutableDictionary *fetchingDict;

+ (id)sharedInstance;

- (void)fetchBizRoleInfoWithPigeonId:(id)a0 pigeonShopId:(id)a1 pigeonBizType:(id)a2 pigeonBizRoleType:(id)a3 completion:(id /* block */)a4;
- (id)generateKeyWithPigeonId:(id)a0 pigeonShopId:(id)a1 pigeonBizType:(id)a2 pigeonBizRoleType:(id)a3;
- (void).cxx_destruct;
- (id)init;

@end
