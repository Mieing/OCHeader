@class NSString, AWEAwemeModel;

@interface AWEInteractionDislikeItemConfig : NSObject

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (nonatomic) BOOL withUser;
@property (copy, nonatomic) NSString *serverAnchorExtra;
@property (nonatomic) unsigned long long buttonType;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) unsigned long long methodType;
@property (nonatomic) BOOL shouldDelete;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void).cxx_destruct;

@end
