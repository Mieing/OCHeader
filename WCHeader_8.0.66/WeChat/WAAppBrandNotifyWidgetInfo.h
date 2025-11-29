@class NSString;

@interface WAAppBrandNotifyWidgetInfo : NSObject <PBCoding>

@property (nonatomic) unsigned int WidgetPkgType;
@property (retain, nonatomic) NSString *WidgetPkgMd5;
@property (nonatomic) unsigned int WidgePkgSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_WidgetPkgType;
+ (void)PBArrayAdd_WidgetPkgMd5;
+ (void)PBArrayAdd_WidgePkgSize;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
