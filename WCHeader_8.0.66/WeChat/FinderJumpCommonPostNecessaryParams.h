@class NSString, NSMutableArray;

@interface FinderJumpCommonPostNecessaryParams : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *songId;
@property (retain, nonatomic) NSString *audioId;
@property (retain, nonatomic) NSString *miaojianMusicId;
@property (retain, nonatomic) NSString *templateId;
@property (nonatomic) unsigned int templateType;
@property (retain, nonatomic) NSMutableArray *topics;
@property (nonatomic) unsigned int postToComment;
@property (nonatomic) unsigned int buttonAction;
@property (retain, nonatomic) NSString *templateMusicId;

+ (void)initialize;

@end
