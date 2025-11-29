@class NSString, IESLiveCombineSubject;

@interface IESLiveAioLinkUserImpl : NSObject <IESLiveAioLinkUser>

@property (retain, nonatomic) IESLiveCombineSubject *currentUserSubject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
