@interface NewLifeConfig : WXPBGeneratedMessage

@property (nonatomic) unsigned int hobbySelectFlag;
@property (nonatomic) unsigned int identitySelectFlag;
@property (nonatomic) unsigned long long finderattrFlag;
@property (nonatomic) unsigned int snsTimelineGuide;
@property (nonatomic) unsigned int snsDetailGuide;
@property (nonatomic) unsigned int snsActionSheetGuide;

+ (void)initialize;

- (void)setSnsActionSheetGuide:(unsigned int)a0;
- (unsigned int)snsActionSheetGuide;
- (void)setSnsDetailGuide:(unsigned int)a0;
- (unsigned int)snsDetailGuide;
- (void)setSnsTimelineGuide:(unsigned int)a0;
- (unsigned int)snsTimelineGuide;
- (void)setFinderattrFlag:(unsigned long long)a0;
- (unsigned long long)finderattrFlag;
- (void)setIdentitySelectFlag:(unsigned int)a0;
- (unsigned int)identitySelectFlag;
- (void)setHobbySelectFlag:(unsigned int)a0;
- (unsigned int)hobbySelectFlag;

@end
