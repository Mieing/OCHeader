@class NSString;

@interface FinderTipsInfo : WXPBGeneratedMessage <WCTColumnCoding>

@property (retain, nonatomic) NSString *reviewWording;
@property (nonatomic) unsigned int needReplaceObjectInfo;
@property (nonatomic) unsigned int isFriend;
@property (nonatomic) unsigned int isFirstPublishTmplPage;
@property (nonatomic) unsigned int isMostFollowTmplPage;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;
+ (void)initialize;

- (void)setIsMostFollowTmplPage:(unsigned int)a0;
- (unsigned int)isMostFollowTmplPage;
- (void)setIsFirstPublishTmplPage:(unsigned int)a0;
- (unsigned int)isFirstPublishTmplPage;
- (void)setIsFriend:(unsigned int)a0;
- (unsigned int)isFriend;
- (void)setNeedReplaceObjectInfo:(unsigned int)a0;
- (unsigned int)needReplaceObjectInfo;
- (void)setReviewWording:(id)a0;
- (id)reviewWording;
- (id)archivedWCTValue;

@end
