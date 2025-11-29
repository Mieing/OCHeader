@class UrlStructV2, NSString, RecallReasonStructV2, FallCardCoverBgColorV2;

@interface ChanFeedVideoStructV2 : GPBMessage

@property (copy, nonatomic) NSString *desc;
@property (nonatomic) BOOL hasDesc;
@property (retain, nonatomic) RecallReasonStructV2 *recallReason;
@property (nonatomic) BOOL hasRecallReason;
@property (retain, nonatomic) UrlStructV2 *bigCardURL;
@property (nonatomic) BOOL hasBigCardURL;
@property (retain, nonatomic) UrlStructV2 *smallCardURL;
@property (nonatomic) BOOL hasSmallCardURL;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) BOOL hasType;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) BOOL hasSource;
@property (retain, nonatomic) FallCardCoverBgColorV2 *coverBgColor;
@property (nonatomic) BOOL hasCoverBgColor;
@property (nonatomic) BOOL guideForbidden;
@property (nonatomic) BOOL hasGuideForbidden;
@property (copy, nonatomic) NSString *yummeBoostId;
@property (nonatomic) BOOL hasYummeBoostId;
@property (copy, nonatomic) NSString *descSource;
@property (nonatomic) BOOL hasDescSource;
@property (copy, nonatomic) NSString *coverInfo;
@property (nonatomic) BOOL hasCoverInfo;
@property (nonatomic) BOOL isExpandedContentAnchorDiversion;
@property (nonatomic) BOOL hasIsExpandedContentAnchorDiversion;
@property (nonatomic) BOOL isTidy;
@property (nonatomic) BOOL hasIsTidy;
@property (copy, nonatomic) NSString *trackingRecRecallInfo;
@property (nonatomic) BOOL hasTrackingRecRecallInfo;
@property (copy, nonatomic) NSString *traceInfo;
@property (nonatomic) BOOL hasTraceInfo;

+ (id)descriptor;

@end
