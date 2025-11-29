@class NSString, FinderJumpInfo, NSMutableArray, DislikeInfo;

@interface FinderCommentAdvertisementInfo : WXPBGeneratedMessage

@property (retain, nonatomic) FinderJumpInfo *jumpInfo;
@property (nonatomic) unsigned long long aid;
@property (retain, nonatomic) NSString *uxinfo;
@property (retain, nonatomic) NSString *reportExtraData;
@property (retain, nonatomic) NSString *reportBypData;
@property (retain, nonatomic) DislikeInfo *dislikeInfo;
@property (retain, nonatomic) FinderJumpInfo *accountJumpInfo;
@property (retain, nonatomic) NSMutableArray *dislikeReasonList;
@property (retain, nonatomic) NSString *traceId;
@property (retain, nonatomic) NSString *adLableName;
@property (retain, nonatomic) FinderJumpInfo *adLablePageJumpInfo;

+ (void)initialize;

@end
