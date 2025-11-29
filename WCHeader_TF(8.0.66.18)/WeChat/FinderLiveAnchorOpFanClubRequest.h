@class BaseRequest, NSString, FinderBaseRequest, FinderLiveAnchorCustomGiftInfo, FinderLiveFanClubInfo;

@interface FinderLiveAnchorOpFanClubRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int opCode;
@property (retain, nonatomic) FinderLiveFanClubInfo *opFanClubInfo;
@property (retain, nonatomic) FinderLiveAnchorCustomGiftInfo *opCustomGiftInfo;

+ (void)initialize;

@end
