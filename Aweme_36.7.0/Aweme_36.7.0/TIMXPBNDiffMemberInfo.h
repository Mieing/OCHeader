@class TIMXPBNDiffParticipantsInfo;

@interface TIMXPBNDiffMemberInfo : GPBMessage

@property (nonatomic) long long memberVersion;
@property (nonatomic) BOOL hasMemberVersion;
@property (nonatomic) BOOL useDiffData;
@property (nonatomic) BOOL hasUseDiffData;
@property (retain, nonatomic) TIMXPBNDiffParticipantsInfo *diffParticipantsInfo;
@property (nonatomic) BOOL hasDiffParticipantsInfo;

+ (id)descriptor;

@end
