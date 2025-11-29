@class NSString;

@interface AWEFavoriteTrackFolderItemClickContext : NSObject

@property (nonatomic) unsigned long long favoriteType;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL ifHint;
@property (nonatomic) long long index;
@property (copy, nonatomic) NSString *folderID;
@property (copy, nonatomic) NSString *position;
@property (copy, nonatomic) NSString *systemType;
@property (copy, nonatomic) NSString *folderName;

- (void).cxx_destruct;

@end
