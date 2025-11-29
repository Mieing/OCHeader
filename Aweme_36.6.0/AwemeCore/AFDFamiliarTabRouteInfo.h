@class NSString, NSDictionary;

@interface AFDFamiliarTabRouteInfo : NSObject

@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *subTabName;
@property (copy, nonatomic) NSString *awemeIds;
@property (nonatomic) BOOL refresh;
@property (nonatomic) BOOL needRefresh;
@property (nonatomic) BOOL fromTaskPage;
@property (nonatomic) BOOL transitionFix;
@property (nonatomic) BOOL dismissAnimated;
@property (copy, nonatomic) NSDictionary *extraInfo;

- (id)extraString;
- (id)initWithExtraInfo:(id)a0;
- (id)initWithExtraString:(id)a0;
- (void).cxx_destruct;

@end
