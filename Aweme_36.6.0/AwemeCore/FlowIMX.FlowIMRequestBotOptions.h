@class _TtC7FlowIMX23FlowIMRequestBotOptions;

@interface FlowIMX.FlowIMRequestBotOptions : NSObject {
    void /* function */ configBotInfo;
}

@property (class, nonatomic, readonly) _TtC7FlowIMX23FlowIMRequestBotOptions *default;
@property (class, nonatomic, readonly) _TtC7FlowIMX23FlowIMRequestBotOptions *defaultWrite;
@property (class, nonatomic, readonly) _TtC7FlowIMX23FlowIMRequestBotOptions *detail;

@property (nonatomic) long long scene;
@property (nonatomic) BOOL syncLocal;
@property (nonatomic, copy) id /* block */ configBotInfo;

- (id)initWithScene:(long long)a0 updateDBIfSuccess:(BOOL)a1 configBotInfo:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
