@class NSString;

@interface FlowMarkdownX.FlowMdCustomHTMLSource : FlowMarkdownX.FlowMdBlockSource {
    void /* function */ type;
    void /* function */ extra;
    void /* function */ alt;
    void /* function */ model;
}

@property (nonatomic, readonly) NSString *type;
@property (nonatomic) BOOL isDataBlockFull;
@property (nonatomic, copy) id extra;
@property (nonatomic, copy) NSString *alt;
@property (nonatomic, copy) id model;

- (void).cxx_destruct;
- (id)initWithType:(id)a0;
- (id)init;

@end
