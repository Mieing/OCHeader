@class NSString, NSDictionary, TextStatusBrandInfo, TextStatePublishSourceInfo, TextStateBrandBaseSignature;
@protocol TextStateBrandLogicDelegate;

@interface TextStateBrandLogic : NSObject

@property (retain, nonatomic) NSString *URLString;
@property (retain, nonatomic) TextStateBrandBaseSignature *signature;
@property (retain, nonatomic) TextStatusBrandInfo *brandInfo;
@property (nonatomic) unsigned int action;
@property (retain, nonatomic) TextStatePublishSourceInfo *sourceInfo;
@property (nonatomic) unsigned int getA8KeyScene;
@property (retain, nonatomic) NSDictionary *attachInfo;
@property (weak, nonatomic) id<TextStateBrandLogicDelegate> delegate;

- (id)initWithURLString:(id)a0;
- (id)initWithSignature:(id)a0;
- (void)exchangeBrandInfoWithCompletionBlock:(id /* block */)a0;
- (void)performActionWithViewController:(id)a0 completionBlock:(id /* block */)a1;
- (void)getSourceInfoFromExtInfo:(id)a0 completionBlock:(id /* block */)a1;
- (void)publishTextStateFromViewController:(id)a0;
- (void)onOpenWebWithURL:(id)a0 viewController:(id)a1 completionBlock:(id /* block */)a2;
- (void)onNoActionAvailableWithViewController:(id)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
