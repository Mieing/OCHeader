@class NSString, NSMutableSet;

@interface GameShareCardReport : MMUserService <MMServiceProtocol> {
    NSMutableSet *_snsExposedSet;
    NSMutableSet *_chatExposedSet;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)snsExposeReport:(id)a0;
- (void)chatExposeReport:(id)a0;
- (void)report28466:(int)a0 contentId:(id)a1 shareScene:(int)a2 appId:(id)a3 fromUin:(unsigned int)a4 shareId:(id)a5 actionId:(int)a6 shareType:(int)a7;
- (void).cxx_destruct;

@end
