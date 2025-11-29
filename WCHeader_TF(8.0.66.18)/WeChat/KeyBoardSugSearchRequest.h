@class NSString, LbsLocationNew, ChildMode;

@interface KeyBoardSugSearchRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) LbsLocationNew *location;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) ChildMode *childMode;
@property (nonatomic) unsigned int h5Version;
@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSString *sessionId;

+ (void)initialize;

@end
