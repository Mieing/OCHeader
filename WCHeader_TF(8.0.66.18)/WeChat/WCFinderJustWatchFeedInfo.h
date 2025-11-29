@class NSString, UIImage, FinderPoiInteractionInfo;

@interface WCFinderJustWatchFeedInfo : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *tid;
@property (retain, nonatomic) NSString *maskTips;
@property (retain, nonatomic) NSString *fullMaskTips;
@property (retain, nonatomic) UIImage *maskIcon;
@property (retain, nonatomic) NSString *scrollGuideTips;
@property (retain, nonatomic) NSString *fullScrollGuideTips;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (retain, nonatomic) FinderPoiInteractionInfo *fromPoiInteraction;

+ (id)infoWithFeedTid:(id)a0 sessionBuffer:(id)a1;
+ (id)feedInfoForPoiInteraction:(id)a0;

- (void)fillFeedUDFKVInfo:(id)a0 forFeed:(id)a1 isWatching:(BOOL)a2;
- (void)fillPageReportInfo:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
