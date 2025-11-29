@class NSArray;

@interface AWETrendDetailMusicListModel : NSObject <IGListDiffable>

@property (retain, nonatomic) NSArray *musicInfoList;
@property (nonatomic) BOOL isFromSkeleton;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (id)initWithMusicInfoList:(id)a0;
- (void).cxx_destruct;

@end
