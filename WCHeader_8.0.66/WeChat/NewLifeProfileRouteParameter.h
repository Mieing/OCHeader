@class WCFinderPushProfileParams, NSString, WCFinderContact;

@interface NewLifeProfileRouteParameter : NSObject

@property (nonatomic, getter=isAuthor) BOOL author;
@property (retain, nonatomic) WCFinderContact *authorContact;
@property (retain, nonatomic) WCFinderPushProfileParams *finderProfileParams;
@property (retain, nonatomic) NSString *finderUsername;
@property (copy, nonatomic) id /* block */ authorRouteCompletion;
@property (nonatomic) BOOL locateToNewLifeTab;
@property (nonatomic) int scene;
@property (nonatomic) int enterType;

- (id)init;
- (void)updateAuthor;
- (void)updateFinderUsername:(id)a0 enableAuthorForSelf:(BOOL)a1;
- (void)updateScene:(unsigned long long)a0;
- (BOOL)isValid;
- (id)description;
- (void).cxx_destruct;

@end
