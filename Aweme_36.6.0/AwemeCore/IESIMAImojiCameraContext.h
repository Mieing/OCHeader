@class IESIMAImojiArtStyleModel, NSArray, NSDictionary;

@interface IESIMAImojiCameraContext : NSObject

@property (retain, nonatomic) IESIMAImojiArtStyleModel *defaultSelectStyle;
@property (copy, nonatomic) NSArray *stylesList;
@property (copy, nonatomic) NSArray *localFilePaths;
@property (copy, nonatomic) id /* block */ publishCompetion;
@property (copy, nonatomic) NSDictionary *routerParams;

- (void).cxx_destruct;

@end
