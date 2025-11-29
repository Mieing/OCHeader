@class NSData, NSString;

@interface FinderLivePromoteInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long id;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSData *promoteInfoBuffer;
@property (nonatomic) BOOL needGetJumpInfo;
@property (retain, nonatomic) NSString *jumpId;
@property (retain, nonatomic) NSData *reportExtBuffer;
@property (retain, nonatomic) NSData *businessExtBuffer;

+ (void)initialize;

@end
