@class BaseRequest, NSString, NSData, FinderBaseRequest, FinderClientStatus;

@interface FinderGetInteractionedFeedListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned int tabFlag;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) FinderClientStatus *status;
@property (nonatomic) unsigned int itemFlag;

+ (void)initialize;

@end
