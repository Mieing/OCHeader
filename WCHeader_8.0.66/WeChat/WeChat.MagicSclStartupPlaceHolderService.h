@interface WeChat.MagicSclStartupPlaceHolderService : MMUserService <MMServiceProtocol> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_cacheRootDir;
}

- (BOOL)supportCoverWithBizName:(id)a0;
- (BOOL)hasCoverWithBizName:(id)a0 frameSetId:(id)a1;
- (id)coverLocalPathWithBizName:(id)a0 frameSetId:(id)a1;
- (id)placeHolderWithBizName:(id)a0 frameSetName:(id)a1 frameSetRootPath:(id)a2;
- (void)updateHeightWithBizName:(id)a0 frameSetId:(id)a1 height:(long long)a2;
- (id)init;
- (void).cxx_destruct;

@end
