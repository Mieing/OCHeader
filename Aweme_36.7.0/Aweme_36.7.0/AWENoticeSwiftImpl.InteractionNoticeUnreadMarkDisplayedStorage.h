@interface AWENoticeSwiftImpl.InteractionNoticeUnreadMarkDisplayedStorage : NSObject <AWEInteractionNoticeUnreadMarkDisplayedStorageProtocol> {
    void /* unknown type, empty encoding */ storageKey;
    void /* unknown type, empty encoding */ didNotDisplayNoticeIDs;
}

- (void)addNewUnreadNoticeWithNoticeID:(long long)a0;
- (void)noticeDidDisplayWithNoticeID:(long long)a0;
- (BOOL)didNoticeNotDisplayWithNoticeID:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
