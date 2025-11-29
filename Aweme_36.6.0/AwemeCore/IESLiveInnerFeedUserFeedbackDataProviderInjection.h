@class NSString;
@protocol IESLiveInnerFeedUserFeedbackDataProviderInjectionDelegate;

@interface IESLiveInnerFeedUserFeedbackDataProviderInjection : NSObject <IESLiveInnerFeedDataProviderInjectionProtocol>

@property (weak, nonatomic) id<IESLiveInnerFeedUserFeedbackDataProviderInjectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
