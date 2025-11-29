@class NSString, TranslateLinkReq, TranslateLinkResp;

@interface TranslateLinkCacheWrap : MMObject <PBCoding>

@property (retain, nonatomic) TranslateLinkReq *req;
@property (retain, nonatomic) TranslateLinkResp *resp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_req;
+ (void)PBArrayAdd_resp;
+ (void)initialize;
+ (id)cacheWrapWithReq:(id)a0 andResp:(id)a1;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
