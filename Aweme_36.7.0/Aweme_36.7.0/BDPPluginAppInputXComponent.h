@class NSMapTable;

@interface BDPPluginAppInputXComponent : BDPBridgeInstancePlugin

@property (retain, nonatomic) NSMapTable *views;

+ (unsigned long long)pluginMode;

- (void)endEditingWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)hideKeyboardWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)insertInputWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)updateInputWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)removeInputWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)setKeyboardValueWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)insertTextAreaWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)updateTextAreaWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)removeTextAreaWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
