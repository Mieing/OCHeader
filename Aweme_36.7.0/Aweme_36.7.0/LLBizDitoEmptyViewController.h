@class NSString, LLDitoPageContext;
@protocol LLBizDitoEmptyPlaceholderDelegate;

@interface LLBizDitoEmptyViewController : UIViewController <IESLocalLifeEmptyPageProtocol>

@property (weak, nonatomic) id<LLBizDitoEmptyPlaceholderDelegate> delegate;
@property (weak, nonatomic) LLDitoPageContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
