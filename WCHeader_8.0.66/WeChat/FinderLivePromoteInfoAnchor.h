@class NSData, NSString;

@interface FinderLivePromoteInfoAnchor : WXPBGeneratedMessage

@property (nonatomic) unsigned long long id;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSData *promoteInfoBuffer;
@property (nonatomic) BOOL isPromoting;
@property (nonatomic) BOOL isDeleted;
@property (nonatomic) BOOL hasPromoted;
@property (nonatomic) BOOL showAudience;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSString *statusTips;

+ (void)initialize;

@end
