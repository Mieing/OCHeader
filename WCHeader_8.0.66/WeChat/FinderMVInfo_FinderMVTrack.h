@class NSMutableArray, NSString, FinderMVInfo_FinderMVTrackReportInfo, FinderContact, FinderMVInfo_ClientDraftInfo;

@interface FinderMVInfo_FinderMVTrack : WXPBGeneratedMessage

@property (nonatomic) unsigned long long timeOffsetInMvMs;
@property (nonatomic) unsigned int timeLengthInMvMs;
@property (nonatomic) unsigned long long refObjectId;
@property (retain, nonatomic) NSString *refNonceid;
@property (nonatomic) unsigned long long timeOffsetInClipMs;
@property (nonatomic) unsigned int fillMode;
@property (nonatomic) unsigned int isFirstUpload;
@property (retain, nonatomic) FinderMVInfo_ClientDraftInfo *clientDraftInfo;
@property (retain, nonatomic) FinderContact *refObjectContact;
@property (nonatomic) float videoPlayRate;
@property (retain, nonatomic) NSString *transitionId;
@property (retain, nonatomic) NSMutableArray *featureList;
@property (nonatomic) unsigned int imageAnimationType;
@property (nonatomic) unsigned int materialType;
@property (retain, nonatomic) FinderMVInfo_FinderMVTrackReportInfo *trackReportInfo;

+ (void)initialize;

@end
