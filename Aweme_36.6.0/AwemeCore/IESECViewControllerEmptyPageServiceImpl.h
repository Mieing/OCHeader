@class NSString;

@interface IESECViewControllerEmptyPageServiceImpl : NSObject <IESECViewControllerEmptyPageService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)awemeToIESECState:(unsigned long long)a0;
+ (unsigned long long)iesecToAwemeState:(unsigned long long)a0;
+ (void)useEmptyPageConfigOnViewController:(id)a0;
+ (void)useEmptyViewEdgeInsetsOn:(id)a0;
+ (unsigned long long)emptyPageStateForViewController:(id)a0;
+ (void)setEmptyPageState:(unsigned long long)a0 forViewController:(id)a1;
+ (void)setupEmptyViewWithTapAction:(id /* block */)a0 onViewController:(id)a1;


@end
