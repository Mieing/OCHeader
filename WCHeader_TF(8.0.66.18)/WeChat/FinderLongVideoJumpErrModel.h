@class FinderLongVideoJumpH5Model, FinderLongVideoLiteAppModel;

@interface FinderLongVideoJumpErrModel : WXPBGeneratedMessage

@property (nonatomic) unsigned int showType;
@property (nonatomic) unsigned int linkType;
@property (retain, nonatomic) FinderLongVideoJumpH5Model *linkH5;
@property (retain, nonatomic) FinderLongVideoLiteAppModel *linkLiteApp;

+ (void)initialize;

@end
