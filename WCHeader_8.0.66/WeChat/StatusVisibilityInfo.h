@class NSMutableArray;

@interface StatusVisibilityInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int visibility;
@property (retain, nonatomic) NSMutableArray *blackContactLabelIds;
@property (retain, nonatomic) NSMutableArray *blackContactUsernames;

+ (void)initialize;

- (void)setBlackContactUsernames:(id)a0;
- (id)blackContactUsernames;
- (void)setBlackContactLabelIds:(id)a0;
- (id)blackContactLabelIds;
- (void)setVisibility:(unsigned int)a0;
- (unsigned int)visibility;

@end
