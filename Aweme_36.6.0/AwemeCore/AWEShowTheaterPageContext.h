@class NSString, NSDictionary, NSNumber;

@interface AWEShowTheaterPageContext : NSObject

@property (retain, nonatomic) NSString *firstAwemeID;
@property (retain, nonatomic) NSString *firstAlbumID;
@property (retain, nonatomic) NSString *awemeIDList;
@property (retain, nonatomic) NSString *albumIDList;
@property (retain, nonatomic) NSString *episodeIDList;
@property (retain, nonatomic) NSDictionary *logExtraDic;
@property (retain, nonatomic) NSString *previousPage;
@property (retain, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSNumber *currentTime;
@property (retain, nonatomic) NSNumber *offset;
@property (retain, nonatomic) NSNumber *enterScene;
@property (retain, nonatomic) NSDictionary *requestParamsDic;
@property (nonatomic) BOOL forbidLoadMore;
@property (nonatomic) BOOL loadPrevious;
@property (nonatomic) long long feedType;
@property (retain, nonatomic) NSNumber *targetCursor;
@property (retain, nonatomic) NSString *targetAlbumId;
@property (retain, nonatomic) NSString *enterType;
@property (retain, nonatomic) NSString *componentID;

- (void).cxx_destruct;

@end
