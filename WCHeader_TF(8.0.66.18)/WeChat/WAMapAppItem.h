@class NSString, UIImage;

@interface WAMapAppItem : NSObject

@property (nonatomic) unsigned long long mapType;
@property (retain, nonatomic) NSString *mapName;
@property (retain, nonatomic) NSString *btnDisplayName;
@property (retain, nonatomic) NSString *viewUrl;
@property (retain, nonatomic) NSString *navigateUrl;
@property (retain, nonatomic) NSString *installUrl;
@property (retain, nonatomic) NSString *queryUrl;
@property (retain, nonatomic) UIImage *mapIcon;
@property (retain, nonatomic) NSString *mapIconUrl;

- (void).cxx_destruct;

@end
