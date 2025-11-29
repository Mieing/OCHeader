@class NSString;

@interface AWEShareABConfig : NSObject <AWEShareABService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)firstPanelUIFrameTime;
+ (BOOL)firstPanelDataFrameTime;
+ (BOOL)firstPanelDataChangeRate;
+ (BOOL)firstPanelDataTypePV;
+ (BOOL)secondPanelDataTypePV;
+ (BOOL)secondPanelFPS;
+ (BOOL)secondPanelDataFrameTime;
+ (id)sharedConfig;


@end
