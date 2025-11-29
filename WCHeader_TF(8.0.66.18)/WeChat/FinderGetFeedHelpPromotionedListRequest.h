@class BaseRequest, NSData;

@interface FinderGetFeedHelpPromotionedListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSData *lastBuff;

+ (void)initialize;

@end
