@class NSString, NSDictionary, AWEAwemeModel;

@interface AWEInteractionToggleFavoriteAwemeConfig : NSObject

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWEAwemeModel *fromAweme;
@property (nonatomic) unsigned long long methodType;
@property (copy, nonatomic) NSString *pageType;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL isLongItem;
@property (nonatomic) BOOL hideAnimationWithSameEnterFrom;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) NSDictionary *extra;

- (void).cxx_destruct;

@end
