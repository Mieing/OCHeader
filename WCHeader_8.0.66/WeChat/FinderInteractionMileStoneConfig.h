@class NSString, NSMutableArray;

@interface FinderInteractionMileStoneConfig : WXPBGeneratedMessage

@property (nonatomic) unsigned int globalFeatureSwitch;
@property (retain, nonatomic) NSMutableArray *breakPoints;
@property (retain, nonatomic) NSString *supplementContent;

+ (void)initialize;

- (void)setSupplementContent:(id)a0;
- (id)supplementContent;
- (void)setBreakPoints:(id)a0;
- (id)breakPoints;
- (void)setGlobalFeatureSwitch:(unsigned int)a0;
- (unsigned int)globalFeatureSwitch;

@end
