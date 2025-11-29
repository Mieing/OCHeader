@class NSString;

@interface WAAppBrandNotifyLoadingImgInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSString *loadingImgUrl;
@property (retain, nonatomic) NSString *loadingImgProgressbarColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_loadingImgUrl;
+ (void)PBArrayAdd_loadingImgProgressbarColor;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
