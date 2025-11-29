@class NSString;

@interface ActivityStageBoardInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int boardScene;
@property (retain, nonatomic) NSString *boardName;
@property (nonatomic) unsigned int topCount;
@property (nonatomic) unsigned int boardMaxCount;
@property (retain, nonatomic) NSString *boardIndex;

+ (void)initialize;

@end
