@class NSString, NSArray;

@interface MMFinderLiveSongItem : NSObject <NSCopying>

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long playState;
@property (nonatomic) unsigned long long heartValue;
@property (retain, nonatomic) NSArray *requestMemberNames;
@property (nonatomic) unsigned int requestMemberCnt;
@property (nonatomic) unsigned long long originalOrder;
@property (retain, nonatomic) NSString *localWarningTips;
@property (readonly, nonatomic) NSString *serverWarningTips;
@property (nonatomic) unsigned int auditStatus;
@property (readonly, nonatomic) BOOL isAuditing;
@property (readonly, nonatomic) BOOL isAuditFail;

+ (id)songWithName:(id)a0;
+ (id)songWithSongInfo:(id)a0 singingSongName:(id)a1;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyValueFromSong:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
