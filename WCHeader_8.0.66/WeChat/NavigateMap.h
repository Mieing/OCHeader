@class NSString;

@interface NavigateMap : MMObject

@property (nonatomic) int mapType;
@property (retain, nonatomic) NSString *mapName;
@property (retain, nonatomic) NSString *viewUrl;
@property (retain, nonatomic) NSString *navigateUrl;
@property (retain, nonatomic) NSString *installUrl;
@property (retain, nonatomic) NSString *queryUrl;

- (void).cxx_destruct;

@end
