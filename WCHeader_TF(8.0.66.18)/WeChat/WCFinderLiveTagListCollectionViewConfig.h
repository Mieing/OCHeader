@interface WCFinderLiveTagListCollectionViewConfig : NSObject

@property (nonatomic) long long limitCount;
@property (nonatomic) long long maxCharecterCount;
@property (nonatomic) struct CGSize { double width; double height; } labelStretchSize;
@property (nonatomic) double titleFontSize;
@property (nonatomic) BOOL forceDarkMode;
@property (nonatomic) unsigned long long commentScene;

+ (id)defaultConfig;

@end
