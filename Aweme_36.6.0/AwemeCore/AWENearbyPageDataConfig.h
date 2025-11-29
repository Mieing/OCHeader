@class NSString;

@interface AWENearbyPageDataConfig : NSObject

@property (nonatomic) BOOL isTransformerShow;
@property (nonatomic) BOOL enableFeedPreload;
@property (nonatomic) BOOL enableFeedCache;
@property (nonatomic) BOOL enableTransformerPreload;
@property (nonatomic) BOOL enableTransformerCache;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *previousEnterFrom;
@property (retain, nonatomic) NSString *lastTabEnterFrom;
@property (retain, nonatomic) NSString *lastTabEnterMethod;
@property (retain, nonatomic) NSString *previousEnterMethod;
@property (nonatomic) long long tabOrder;
@property (nonatomic) long long enterType;

- (void).cxx_destruct;

@end
