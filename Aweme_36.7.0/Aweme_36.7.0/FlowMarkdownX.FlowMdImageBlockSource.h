@class NSURL, NSString;

@interface FlowMarkdownX.FlowMdImageBlockSource : FlowMarkdownX.FlowMdBlockSource {
    void /* function */ imageUrl;
    void /* function */ title;
}

@property (nonatomic, readonly) NSURL *imageUrl;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic) double width;
@property (nonatomic) double height;

- (id)initWithImageUrl:(id)a0 title:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isEqual:(id)a0;

@end
