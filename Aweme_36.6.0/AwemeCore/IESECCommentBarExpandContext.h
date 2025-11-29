@class NSString, NSDictionary;

@interface IESECCommentBarExpandContext : NSObject

@property (copy, nonatomic) NSString *awemeId;
@property (copy, nonatomic) NSString *authorId;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) unsigned long long entranceFrom;
@property (nonatomic) unsigned long long initScreenMode;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) NSDictionary *sceneExtraInfo;

- (void).cxx_destruct;

@end
