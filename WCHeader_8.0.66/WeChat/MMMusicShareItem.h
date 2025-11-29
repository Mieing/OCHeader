@class NSString;

@interface MMMusicShareItem : NSObject <NSCoding, NSCopying, PBCoding>

@property (retain, nonatomic) NSString *mvObjectId;
@property (retain, nonatomic) NSString *mvNonceId;
@property (retain, nonatomic) NSString *mvCoverUrl;
@property (retain, nonatomic) NSString *mvMakerFinderNickname;
@property (retain, nonatomic) NSString *mvMakerFinderUsername;
@property (retain, nonatomic) NSString *mvSingerName;
@property (retain, nonatomic) NSString *mvAlbumName;
@property (retain, nonatomic) NSString *mvMusicGenre;
@property (retain, nonatomic) NSString *mvIdentification;
@property (nonatomic) unsigned long long mvIssueDate;
@property (retain, nonatomic) NSString *mvExtInfo;
@property (nonatomic) unsigned int musicDuration;
@property (retain, nonatomic) NSString *mvOperationUrl;
@property (copy, nonatomic) NSString *mid;
@property (copy, nonatomic) NSString *appIdForSourceDisplay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_mvObjectId;
+ (void)PBArrayAdd_mvNonceId;
+ (void)PBArrayAdd_mvCoverUrl;
+ (void)PBArrayAdd_mvMakerFinderNickname;
+ (void)PBArrayAdd_mvSingerName;
+ (void)PBArrayAdd_mvAlbumName;
+ (void)PBArrayAdd_mvMusicGenre;
+ (void)PBArrayAdd_mvIssueDate;
+ (void)PBArrayAdd_mvIdentification;
+ (void)PBArrayAdd_mvExtInfo;
+ (void)PBArrayAdd_musicDuration;
+ (void)PBArrayAdd_mvMakerFinderUsername;
+ (void)PBArrayAdd_mvOperationUrl;
+ (void)PBArrayAdd_mid;
+ (void)PBArrayAdd_appIdForSourceDisplay;
+ (void)initialize;
+ (id)fromXML:(struct XmlReaderNode_t { } *)a0;

- (id)getPBPropertyTable;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)toXML;
- (BOOL)isValidMvItem;
- (void)clearMvInfo;
- (void).cxx_destruct;

@end
