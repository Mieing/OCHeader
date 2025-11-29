@class NSString;

@interface GameHaowanMediaInfo : MMObject

@property (retain, nonatomic) NSString *localId;
@property (retain, nonatomic) NSString *localPath;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic) unsigned int mediaType;
@property (nonatomic) unsigned int editFlag;

- (id)createDbItem:(id)a0;
- (id)generateFileKey;
- (void).cxx_destruct;

@end
