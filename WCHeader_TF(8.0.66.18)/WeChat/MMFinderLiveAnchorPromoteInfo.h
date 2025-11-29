@class NSString;

@interface MMFinderLiveAnchorPromoteInfo : NSObject

@property (nonatomic) unsigned long long promoteId;
@property (nonatomic) unsigned int type;
@property (nonatomic) BOOL isPromoting;
@property (nonatomic) BOOL readyToDisplay;
@property (nonatomic) BOOL showAudience;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSString *statusTips;
@property (retain, nonatomic) NSString *anchorUsername;

+ (id)createAnchorPromoteInfoFrom:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)promoteKey;
- (BOOL)shouldSkipReportOnPromoteManagerPanelStart;
- (void).cxx_destruct;

@end
