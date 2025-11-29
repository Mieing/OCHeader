@class NSString, UIView, WCFinderSimplePlayerView;

@interface LVOptionalOpenParams : NSObject

@property (nonatomic) BOOL needUpdateContextId;
@property (nonatomic) BOOL forbidCheckLimitMode;
@property (nonatomic) int entryScene;
@property (nonatomic) int entryCardType;
@property (copy, nonatomic) NSString *reportExtraInfo;
@property (nonatomic) int getRelatedListScene;
@property (copy, nonatomic) NSString *fromSessionId;
@property (copy, nonatomic) NSString *sourceContextId;
@property (copy, nonatomic) NSString *sourceTabContextId;
@property (retain, nonatomic) WCFinderSimplePlayerView *player;
@property (retain, nonatomic) UIView *fromCardSnapshot;

- (id)init;
- (void).cxx_destruct;

@end
