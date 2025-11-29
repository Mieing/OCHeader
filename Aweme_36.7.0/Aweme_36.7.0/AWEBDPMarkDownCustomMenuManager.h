@interface AWEBDPMarkDownCustomMenuManager : NSObject {
    void /* unknown type, empty encoding */ selectMenuMap;
}

+ (id)shareManager;

- (BOOL)shouldShowCustomMenuWithConversationId:(id)a0;
- (void)updateCustomMenuMap:(id)a0 :(BOOL)a1;
- (void)deleteKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
