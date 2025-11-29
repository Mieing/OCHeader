@class NSString;

@interface ListScrollEventReq : WXPBGeneratedMessage

@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int isScroll;
@property (retain, nonatomic) NSString *firstExpFeedId;

+ (void)initialize;

@end
