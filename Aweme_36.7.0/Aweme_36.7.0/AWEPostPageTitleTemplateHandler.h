@class NSString;
@protocol AWEPostPageContext;

@interface AWEPostPageTitleTemplateHandler : NSObject <AWEPostPageTitleTemplateService>

@property (nonatomic) long long titleTemplateClickSignal;
@property (retain, nonatomic) NSString *titleTemplateSignal;
@property (readonly, nonatomic) id<AWEPostPageContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterPostPage;

@end
