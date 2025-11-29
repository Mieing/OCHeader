@class NSString;

@interface IESLocalLifeIMBizService : HTSService <IESLocalLifeIMBizService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)transferToMessageVCWithUid:(id)a0 nickname:(id)a1 alias:(id)a2 isCompanyProfile:(BOOL)a3 fromVC:(id)a4 showKeyboard:(BOOL)a5;
+ (void)transferToMessageVCWithUid:(id)a0 nickname:(id)a1 alias:(id)a2 showFolloweeCount:(BOOL)a3 isCompanyProfile:(BOOL)a4 fromVC:(id)a5 showKeyboard:(BOOL)a6 ext:(id)a7 completion:(id /* block */)a8;
+ (id)iMShareMessageDidSendNotification;
+ (id)iMShareMessageSenderNotification;


@end
