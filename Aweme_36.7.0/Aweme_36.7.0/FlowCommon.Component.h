@class NSString;

@interface FlowCommon.Component : NSObject {
    void /* unknown type, empty encoding */ descendantsCache;
    void /* unknown type, empty encoding */ childComponents;
    void /* unknown type, empty encoding */ parent;
    void /* unknown type, empty encoding */ hidesBottomBarWhenPushed;
}

@property (nonatomic, readonly) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
