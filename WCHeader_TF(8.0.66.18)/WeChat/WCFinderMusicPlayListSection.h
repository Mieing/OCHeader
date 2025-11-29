@class NSArray, NSString;

@interface WCFinderMusicPlayListSection : NSObject

@property (nonatomic) long long secType;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long count;

+ (BOOL)isContentSection:(long long)a0;

- (long long)displayMaxCount;
- (BOOL)showMoreInMusicTab;
- (BOOL)showIndependentMoreCell;
- (BOOL)displayNestCell;
- (void).cxx_destruct;

@end
