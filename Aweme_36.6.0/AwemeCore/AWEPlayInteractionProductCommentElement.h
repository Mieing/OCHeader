@class NSString, UIView;
@protocol AFDRichAwemeProductCommentViewProtocol;

@interface AWEPlayInteractionProductCommentElement : AWEPlayInteractionLeftElement <AWEElementSelfFilterProtocol>

@property (retain, nonatomic) UIView<AFDRichAwemeProductCommentViewProtocol> *productCommentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;

- (void)initializeElement;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
