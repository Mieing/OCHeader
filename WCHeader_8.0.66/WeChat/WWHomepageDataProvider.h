@class NSString;

@interface WWHomepageDataProvider : WCHomepageDataProvider_Sns {
    NSString *fpHash;
    BOOL isWorking;
    NSString *jumpToItemId;
}

- (void)updateWithReferID:(id)a0;
- (void)updateWithReferID:(id)a0 bottomID:(id)a1;
- (void)updateHeadWithSource:(long long)a0;
- (void)forceUpdateWithReferID:(id)a0;
- (void)fetchDataBeforeJumpToItemId:(id)a0;
- (void)updateMediaWithDataType:(unsigned int)a0 referID:(id)a1;
- (void)updateMediaWithDataType:(unsigned int)a0 referID:(id)a1 bottomID:(id)a2;
- (void)updatePrePage:(id)a0;
- (void)forceUpdateMediaWithDataType:(unsigned int)a0 referID:(id)a1;
- (id)converListToList:(id)a0;
- (void)requestForSnsHomepageRequest:(id)a0 source:(long long)a1;
- (void)requestForSnsMediaHomepageWithDataType:(unsigned int)a0 maxID:(id)a1 source:(long long)a2;
- (void)requestForSnsHomepageRequest:(id)a0 source:(long long)a1 filterType:(unsigned int)a2 username:(id)a3;
- (void)requestForSnsHomepageRequest:(id)a0 source:(long long)a1 filterType:(unsigned int)a2 username:(id)a3 pullType:(unsigned int)a4;
- (void)requestForSnsHomepageRequest:(id)a0 minID:(id)a1 source:(long long)a2;
- (void)requestForSnsMediaHomepageWithDataType:(unsigned int)a0 maxID:(id)a1 minID:(id)a2 source:(long long)a3;
- (void)requestForSnsHomepageRequest:(id)a0 minID:(id)a1 source:(long long)a2 filterType:(unsigned int)a3 username:(id)a4;
- (long long)responseRetCode2HomePageRetCode:(int)a0;
- (void)startCgiRequest:(id)a0;
- (void)procssCgiSuccessResponse:(id)a0 request:(id)a1;
- (void)procssCgiFailResponse:(id)a0;
- (void).cxx_destruct;

@end
