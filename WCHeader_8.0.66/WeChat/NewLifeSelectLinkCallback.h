@class FinderJumpInfo, FinderExtendedReading;

@interface NewLifeSelectLinkCallback : WXPBGeneratedMessage

@property (nonatomic) unsigned int jumpInfoBusinessType;
@property (retain, nonatomic) FinderJumpInfo *jumpInfo;
@property (retain, nonatomic) FinderExtendedReading *extendedReading;

+ (void)initialize;

@end
