@class NSString;

@interface GameLocalAlbumInfo : MMObject

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *gameName;
@property (retain, nonatomic) NSString *albumName;
@property (retain, nonatomic) NSString *defaultTitle;

- (void).cxx_destruct;

@end
