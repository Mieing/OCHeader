@class NSString;

@interface FinderHomePageSectionInfo : WXPBGeneratedMessage

@property (nonatomic) BOOL isFold;
@property (retain, nonatomic) NSString *updateTime;
@property (retain, nonatomic) NSString *lastestItemDesc;

+ (void)initialize;

- (void)setLastestItemDesc:(id)a0;
- (id)lastestItemDesc;
- (void)setUpdateTime:(id)a0;
- (id)updateTime;
- (void)setIsFold:(BOOL)a0;
- (BOOL)isFold;

@end
