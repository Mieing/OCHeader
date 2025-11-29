@class NSString, NSNumber, NSArray;

@interface PersonalCenterJumpInfo : NSObject

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *enterPath;
@property (retain, nonatomic) NSNumber *scene;
@property (copy, nonatomic) NSString *sceneNote;
@property (retain, nonatomic) NSNumber *requestAcct;
@property (copy, nonatomic) NSArray *imgInfoList;
@property (retain, nonatomic) NSNumber *picFromScene;
@property (copy, nonatomic) NSString *wxaData;

+ (id)makeWithAppId:(id)a0 enterPath:(id)a1 scene:(id)a2 sceneNote:(id)a3 requestAcct:(id)a4 imgInfoList:(id)a5 picFromScene:(id)a6 wxaData:(id)a7;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
