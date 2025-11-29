@class NSString, FinderLiveSearchMoreGamesResponse_Weapp;

@interface MMFinderLiveGameSearchUserInfo : MMFinderLiveGameUserInfo

@property (nonatomic) BOOL isAdded;
@property (retain, nonatomic) FinderLiveSearchMoreGamesResponse_Weapp *weApp;
@property (retain, nonatomic) NSString *shortAppname;

- (id)initWithPBItem:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyFromPBItem:(id)a0;
- (void).cxx_destruct;

@end
