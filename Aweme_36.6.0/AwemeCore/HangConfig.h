@interface HangConfig : TraceMetaPluginConfig {
    BOOL _watch_recover_upload;
    unsigned int _hitch;
    unsigned int _hang;
    unsigned int _anr;
    unsigned int _anr_bg;
    unsigned int _watch_dog;
    unsigned int _watch_dump;
    unsigned int _watch_trigger;
}

- (id)initWithDictionary:(id)a0;

@end
