@class NSString;

@interface AWELiveWebcastDynamicSchemeModel : IESLiveWebcastBaseModel

@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *secAnchorId;
@property (copy, nonatomic) NSString *enterFromMerge;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *makeAppointId;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *showColumn;
@property (copy, nonatomic) NSString *orientationOrder;
@property (copy, nonatomic) NSString *shareFromUserId;
@property (copy, nonatomic) NSString *groupId;
@property (nonatomic) BOOL isPreviewExposed;
@property (nonatomic) BOOL isWatchExpressExposed;

- (id)parsedKeys;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
