@class IESGCPPBDetailAnnouncementV2, IESGCPPBGameDetailOfficialAccountInfo, IESGCPPBGameDetailEvaluationVideoList, NSMutableArray;

@interface IESGCPPBGameDetailGameBasicInfoV2 : GPBMessage

@property (nonatomic) long long downloadStatus;
@property (retain, nonatomic) NSMutableArray *imagesArray;
@property (readonly, nonatomic) unsigned long long imagesArray_Count;
@property (retain, nonatomic) NSMutableArray *videosArray;
@property (readonly, nonatomic) unsigned long long videosArray_Count;
@property (retain, nonatomic) IESGCPPBGameDetailEvaluationVideoList *evaluationVideoList;
@property (nonatomic) BOOL hasEvaluationVideoList;
@property (retain, nonatomic) NSMutableArray *gameAwardListArray;
@property (readonly, nonatomic) unsigned long long gameAwardListArray_Count;
@property (nonatomic) BOOL showBusinessInfo;
@property (retain, nonatomic) NSMutableArray *gameImagesArray;
@property (readonly, nonatomic) unsigned long long gameImagesArray_Count;
@property (nonatomic) BOOL complianceElementsVisible;
@property (nonatomic) BOOL onlineTimeVisible;
@property (retain, nonatomic) IESGCPPBDetailAnnouncementV2 *newAnnouncement;
@property (nonatomic) BOOL hasNewAnnouncement;
@property (retain, nonatomic) IESGCPPBGameDetailOfficialAccountInfo *officialAccountInfo;
@property (nonatomic) BOOL hasOfficialAccountInfo;
@property (retain, nonatomic) NSMutableArray *videoInfosArray;
@property (readonly, nonatomic) unsigned long long videoInfosArray_Count;
@property (retain, nonatomic) NSMutableArray *pgcGameMapInfoArray;
@property (readonly, nonatomic) unsigned long long pgcGameMapInfoArray_Count;

+ (id)descriptor;

@end
