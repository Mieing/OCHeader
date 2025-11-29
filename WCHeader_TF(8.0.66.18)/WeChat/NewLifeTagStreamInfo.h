@class NSMutableArray;

@interface NewLifeTagStreamInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int needToShowTag;
@property (retain, nonatomic) NSMutableArray *postTagList;
@property (nonatomic) unsigned int needToHighLight;

+ (void)initialize;

@end
