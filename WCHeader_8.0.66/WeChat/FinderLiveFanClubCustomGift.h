@class NSString, NSMutableArray;

@interface FinderLiveFanClubCustomGift : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *customGiftId;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *thumbUrl;
@property (nonatomic) unsigned int flag;
@property (retain, nonatomic) NSMutableArray *gifts;
@property (nonatomic) unsigned int modQuota;
@property (nonatomic) unsigned int remainModTimes;
@property (nonatomic) unsigned int decalMaxLen;

+ (void)initialize;

- (BOOL)colorCustomizable;
- (BOOL)textCustomizable;

@end
