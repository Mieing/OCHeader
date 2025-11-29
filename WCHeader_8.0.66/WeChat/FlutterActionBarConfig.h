@class NSNumber, FlutterActionBarTitleConfig, FlutterActionBarIconConfig;

@interface FlutterActionBarConfig : NSObject

@property (retain, nonatomic) NSNumber *showPlatform;
@property (retain, nonatomic) FlutterActionBarTitleConfig *titleConfig;
@property (retain, nonatomic) FlutterActionBarIconConfig *leftItem;
@property (retain, nonatomic) FlutterActionBarIconConfig *rightItem;

+ (id)makeWithShowPlatform:(id)a0 titleConfig:(id)a1 leftItem:(id)a2 rightItem:(id)a3;
+ (id)fromMap:(id)a0;

- (id)toMap;
- (void).cxx_destruct;

@end
