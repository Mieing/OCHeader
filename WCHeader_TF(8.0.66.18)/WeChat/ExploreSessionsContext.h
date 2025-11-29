@class SquareSessionContext, AppSessionContext, SquareTabSessionContext, ActiveSessionContext, SquareItemSessionContext;

@interface ExploreSessionsContext : WXPBGeneratedMessage

@property (retain, nonatomic) ActiveSessionContext *activeSession;
@property (retain, nonatomic) AppSessionContext *appSessionInherit;
@property (retain, nonatomic) SquareSessionContext *squareSession;
@property (retain, nonatomic) SquareItemSessionContext *squareItemSession;
@property (retain, nonatomic) SquareTabSessionContext *squareTabSession;

+ (void)initialize;

@end
