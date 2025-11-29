@interface AWEBatManHelper : NSObject

+ (BOOL)isFirstTimePlayForBatManID:(id)a0;
+ (void)setFirstTimePlayForBatManID:(id)a0;
+ (BOOL)isValidNetwork;
+ (BOOL)needShowAddDesktopForBatManID:(id)a0;
+ (void)setAddToDesktopForBatManID:(id)a0;
+ (BOOL)isLoadingVCShowing;
+ (id)convertAlertHeaderFromIcon:(struct CGImage { } *)a0 Title:(id)a1;
+ (void)queryBatManModel:(id)a0 source:(id)a1 completion:(id /* block */)a2;
+ (BOOL)isSmallScreenDevice;

@end
