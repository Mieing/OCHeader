@class NSString;

@interface FlowMarkdownX.FlowMdManagerAppInfo : NSObject {
    void /* function */ language;
}

@property (nonatomic, readonly) BOOL isRTL;
@property (nonatomic, readonly) BOOL isLightMode;
@property (nonatomic, readonly) NSString *language;

- (id)initWithIsRTL:(BOOL)a0 isLightMode:(BOOL)a1 language:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
