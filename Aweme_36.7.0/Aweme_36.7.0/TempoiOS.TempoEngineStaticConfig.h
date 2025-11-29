@interface TempoiOS.TempoEngineStaticConfig : NSObject {
    void /* function */ debugTagViewDidTapCallback;
}

@property (nonatomic) BOOL debugToggle;
@property (nonatomic, copy) id /* block */ debugTagViewDidTapCallback;
@property (nonatomic) BOOL enableStaticPropertyOptimal;

- (void).cxx_destruct;
- (id)init;

@end
