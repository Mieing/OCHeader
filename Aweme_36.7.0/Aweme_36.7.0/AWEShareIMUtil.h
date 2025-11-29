@interface AWEShareIMUtil : NSObject

+ (id)getDisplayNameWith:(id)a0 maxLength:(double)a1 maxHeight:(double)a2 displayName:(id)a3;
+ (id)putNormalShareModelAtTheTopWithShareList:(id)a0;
+ (Class)aAFDServiceDOUYINInterestSocialAdapterClass;
+ (BOOL)isSuccessOrSelfSeeWhenPostIM;
+ (void)shareToUserWithCrateGroup:(BOOL)a0 shareContext:(id)a1 selectUsers:(id)a2 text:(id)a3 completion:(id /* block */)a4;
+ (void)shareToUserWithContext:(id)a0 shareUsers:(id)a1 text:(id)a2 isGroupShare:(BOOL)a3 completion:(id /* block */)a4;
+ (void)finishShareVideoForActivityWithUsers:(id)a0;

- (id)aAFDServiceDOUYINInterestSocialAdapter;

@end
