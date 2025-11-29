@interface AWEFormatMenuCommonComponent : AWEIMComponentBase <AWEFormatMessageMenuCommonInjectService, IESIMMessageMenuSupportProtocol> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_playService;
}

- (void)deleteMsg:(id)a0;
- (void)batchDeleteMsgs:(id)a0;
- (id)formatSupportMenuTypeForMessage:(id)a0 isTextPartiallySelected:(BOOL)a1;
- (void)componentDidMounted:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
