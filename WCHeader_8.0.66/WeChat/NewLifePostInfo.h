@class NSData, NSString, FinderObjectExtend, NewLifePostReportInfo, FinderJumpInfo, FinderEventInfo, NSMutableArray, FinderExtendedReading, FinderLocation, NewLifeSelectMusicInfo;

@interface NewLifePostInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *imgList;
@property (retain, nonatomic) NSString *description;
@property (retain, nonatomic) FinderLocation *location;
@property (nonatomic) unsigned int index;
@property (nonatomic) unsigned int ratioW;
@property (nonatomic) unsigned int ratioH;
@property (nonatomic) unsigned long long feedId;
@property (retain, nonatomic) NSString *nonceId;
@property (retain, nonatomic) NSMutableArray *parts;
@property (retain, nonatomic) NewLifePostReportInfo *reportInfo;
@property (retain, nonatomic) FinderEventInfo *eventInfo;
@property (retain, nonatomic) NewLifeSelectMusicInfo *selectedMusicInfo;
@property (retain, nonatomic) FinderObjectExtend *objectExtend;
@property (retain, nonatomic) NSMutableArray *commentEggInfo;
@property (retain, nonatomic) FinderExtendedReading *extendReading;
@property (retain, nonatomic) NSData *maasEditDraft;
@property (retain, nonatomic) FinderJumpInfo *jumpInfo;

+ (void)initialize;

@end
