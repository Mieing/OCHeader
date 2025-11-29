@class NSString;

@interface __AWERTVUserProfileViewControllerContext : NSObject <RTVInteractionUserProfileControllerContext>

@property (copy, nonatomic) NSString *roomID;
@property (nonatomic) BOOL disableEnterProfilePage;
@property (nonatomic) BOOL showStatisticInfo;
@property (nonatomic) BOOL showVerificationInfo;
@property (readonly, copy, nonatomic) NSString *enterFrom;
@property (readonly, copy, nonatomic) NSString *enterMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDisableEnterProfilePage:(BOOL)a0 showStatisticInfo:(BOOL)a1 andVerification:(BOOL)a2;
- (id)initWithDisableEnterProfilePage:(BOOL)a0;
- (void).cxx_destruct;

@end
