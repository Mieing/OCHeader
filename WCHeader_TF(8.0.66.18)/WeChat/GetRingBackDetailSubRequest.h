@class MusicRingBack, FinderRingBack;

@interface GetRingBackDetailSubRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) MusicRingBack *musicRingBack;
@property (retain, nonatomic) FinderRingBack *finderRingBack;

+ (void)initialize;

@end
