@class NSString;

@interface FinderLiveGetMoneyOffTagRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *activityKey;
@property (nonatomic) BOOL isProactiveReq;
@property (nonatomic) unsigned int entryScene;

+ (void)initialize;

@end
