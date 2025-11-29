@class NSString;

@interface WeChat.EcsMagicNativeStarterBizCreator : NSObject <MagicCardStarterProtocols.IMagicCardStarterBizCreator> {
    void /* unknown type, empty encoding */ bizName;
    void /* unknown type, empty encoding */ path;
}

@property (nonatomic, copy) NSString *bizName;
@property (nonatomic, copy) NSString *path;

- (id)initWithBizName:(id)a0 path:(id)a1;
- (id)create;
- (id)init;
- (void).cxx_destruct;

@end
