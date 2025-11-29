@interface WCAdCommonConfig : NSObject <NSCoding>

@property (nonatomic) BOOL forbidAutoPlay;
@property (nonatomic) int basicRemWidth;
@property (nonatomic) int basicRootFontSize;
@property (nonatomic) BOOL hideFirstBossComment;
@property (nonatomic) int finderLiveStreamDisplayType;
@property (nonatomic) BOOL showPersonalizedInfoInFeedback;
@property (nonatomic) BOOL hideGameGiftTag;
@property (nonatomic) BOOL hideConsultBar;
@property (nonatomic) BOOL hideAdChainStrengthenLabel;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)modelCustomTransformFromDictionary:(id)a0 forConfigTag:(id)a1;

@end
