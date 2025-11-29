@class NSString, NSDictionary;

@interface AWEDouYinSelectBrandTrackerInfo : NSObject

@property (copy, nonatomic) NSString *brandType;
@property (copy, nonatomic) NSString *showType;
@property (copy, nonatomic) NSString *sceneType;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) double showTime;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (nonatomic) BOOL isAppear;

+ (id)trackerInfoWithBrandType:(long long)a0 referString:(id)a1 extraParams:(id)a2;
+ (id)getLabelSceneType:(id)a0;
+ (id)trackerInfoWithBrandType:(long long)a0 referString:(id)a1;

- (id)initWithBrandType:(id)a0 showType:(id)a1 sceneType:(id)a2 enterFrom:(id)a3 extraParams:(id)a4;
- (void)updateShowTime;
- (void)trackDouyinSelectBrandShowTime;
- (void).cxx_destruct;
- (id)init;

@end
