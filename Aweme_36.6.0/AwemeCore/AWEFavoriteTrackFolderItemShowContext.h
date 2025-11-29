@class NSString;

@interface AWEFavoriteTrackFolderItemShowContext : NSObject

@property (nonatomic) unsigned long long favoriteType;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL ifHint;
@property (nonatomic) long long index;
@property (copy, nonatomic) NSString *folderID;
@property (copy, nonatomic) NSString *folderName;
@property (copy, nonatomic) NSString *systemType;

- (void).cxx_destruct;

@end
