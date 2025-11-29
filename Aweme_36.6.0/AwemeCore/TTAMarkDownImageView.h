@class NSURL, NSString, UIStackView;

@interface TTAMarkDownImageView : UIImageView <CMMarkdownSubViewTextCopiable>

@property (nonatomic) unsigned long long loadState;
@property (retain, nonatomic) NSURL *imageUrl;
@property (retain, nonatomic) UIStackView *errorStackView;
@property (nonatomic) unsigned long long index;
@property (copy, nonatomic) id /* block */ clickedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithImageUrl:(id)a0;
- (id)copyPureStr;
- (id)copyMarkdownStr;
- (void)clicked:(id)a0;
- (void)addErrorView;
- (void)alwaysLoading;
- (void).cxx_destruct;
- (id)init;
- (void)startLoading;

@end
