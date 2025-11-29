@class NSString;

@interface WeChat.MagicSclFrameSetRoot : NSObject {
    void /* unknown type, empty encoding */ target;
    void /* unknown type, empty encoding */ appId;
    void /* unknown type, empty encoding */ instanceName;
    void /* unknown type, empty encoding */ appContextId;
    void /* unknown type, empty encoding */ path;
    void /* unknown type, empty encoding */ query;
    void /* unknown type, empty encoding */ useClientClick;
    void /* unknown type, empty encoding */ rootId;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ boundFrameSets;
}

@property (nonatomic, readonly) NSString *rootId;
@property (nonatomic, readonly) NSString *description;

- (id)getOrCreateFrameSetWithFrameSetName:(id)a0;
- (void)dataChangeWithSpecificFrameSetNameWithData:(id)a0 frameSetName:(id)a1 extInfo:(id)a2;
- (void)dataChangeWithData:(id)a0 extInfo:(id)a1;
- (void)redraw;
- (void)pause;
- (void)resume;
- (id)init;
- (void).cxx_destruct;

@end
