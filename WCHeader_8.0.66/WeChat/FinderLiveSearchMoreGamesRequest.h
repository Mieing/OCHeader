@class BaseRequest, NSString, ExtDeviceInfo;

@interface FinderLiveSearchMoreGamesRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *queryWord;
@property (retain, nonatomic) NSString *nextOffset;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) ExtDeviceInfo *extDeviceInfo;

+ (void)initialize;

@end
