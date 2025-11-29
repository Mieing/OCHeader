@class NSString, NSDictionary, NSData, FinderFollowNewLifeReportInfo;

@interface WCFinderFollowCGIRequestParams : NSObject

@property (retain, nonatomic) NSString *posterUsername;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *refObjectID;
@property (nonatomic) int reportScene;
@property (nonatomic) unsigned long long opType;
@property (nonatomic) int enterType;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (nonatomic) unsigned long long followScene;
@property (retain, nonatomic) NSString *sessionExtraKey;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned long long fromMentionID;
@property (nonatomic) unsigned int enhanceFollowBtn;
@property (copy, nonatomic) NSDictionary *clientUdfKv;
@property (retain, nonatomic) FinderFollowNewLifeReportInfo *newlifeReportInfo;

- (id)initWithPosterUsername:(id)a0 reportScene:(int)a1 optype:(unsigned long long)a2 enterType:(int)a3 followScene:(unsigned long long)a4;
- (void).cxx_destruct;

@end
