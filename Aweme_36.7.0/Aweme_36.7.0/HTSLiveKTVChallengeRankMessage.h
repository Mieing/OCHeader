@class NSString, HTSLiveCommon, HTSLiveImage, NSMutableArray;

@interface HTSLiveKTVChallengeRankMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) NSMutableArray *userListArray;
@property (readonly, nonatomic) unsigned long long userListArray_Count;
@property (nonatomic) long long singerId;
@property (copy, nonatomic) NSString *singerNickname;
@property (retain, nonatomic) HTSLiveImage *singerAvatarThumb;
@property (nonatomic) BOOL hasSingerAvatarThumb;
@property (copy, nonatomic) NSString *singerOpenId;

+ (id)descriptor;

@end
