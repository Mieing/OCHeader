@interface IESLiveInteractConfigLayoutFetcherParams : NSObject

@property (nonatomic) int uiLayout;
@property (nonatomic) long long orientation;

+ (long long)defaultOrientationForUILayout:(int)a0;
+ (id)paramsWithUILayout:(int)a0 orientation:(id)a1;
+ (id)paramsWithUILayout:(int)a0;

@end
