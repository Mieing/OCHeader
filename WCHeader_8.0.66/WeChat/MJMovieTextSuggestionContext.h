@class NSMutableArray, NSString, NSData, FinderLocation, MJMovieTextSuggestionSnapshot;
@protocol MJMovieTextSuggestionContextDataSource;

@interface MJMovieTextSuggestionContext : NSObject

@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSString *finderUserName;
@property (retain, nonatomic) MJMovieTextSuggestionSnapshot *snapshot;
@property (weak, nonatomic) id<MJMovieTextSuggestionContextDataSource> dataSource;
@property (retain, nonatomic) NSString *userInputWording;
@property (readonly, nonatomic) NSString *musicID;
@property (readonly, nonatomic) NSString *templateID;
@property (readonly, nonatomic) NSData *feedEmbedding;
@property (readonly, nonatomic) FinderLocation *userLocation;
@property (readonly, nonatomic) NSMutableArray *feedLocations;

+ (id)snapshotOCRDataWithText:(id)a0;

- (id)initWithSessionID:(id)a0 finderUserName:(id)a1;
- (BOOL)isSnapshotReady;
- (id)toCGIContext;
- (void).cxx_destruct;

@end
