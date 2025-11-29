@class NSString, NSArray, NSDictionary;

@interface AWELiveReposterModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *hashTag;
@property (copy, nonatomic) NSString *landPageScheme;
@property (copy, nonatomic) NSArray *backgroundImageList;
@property (copy, nonatomic) NSDictionary *extraInfoParams;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *musicId;
@property (copy, nonatomic) NSString *reposterIdentifier;
@property (copy, nonatomic) id /* block */ getReposterExtraInfo;

- (void).cxx_destruct;

@end
