@class FinderEcObject, FinderObject;

@interface FinderMixObject : WXPBGeneratedMessage

@property (nonatomic) unsigned int objectType;
@property (retain, nonatomic) FinderObject *finderObject;
@property (retain, nonatomic) FinderEcObject *finderEcObject;
@property (nonatomic) unsigned int purchasedContentFlag;

+ (void)initialize;

@end
