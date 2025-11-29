@class NSString, NSArray, NSDictionary, IESIMBulletContainerPreloadConfig;

@interface IESIMBulletContainerListPreloadContext : NSObject

@property (copy, nonatomic) NSString *bulletScene;
@property (nonatomic) long long preloadScene;
@property (retain, nonatomic) IESIMBulletContainerPreloadConfig *preloadConfig;
@property (retain, nonatomic) NSArray *items;
@property (nonatomic) long long startIndex;
@property (nonatomic) long long direction;
@property (retain, nonatomic) NSDictionary *trackExtraInfo;

- (void).cxx_destruct;

@end
