@class NSString, FinderJumpInfo, FinderExtendedReading;

@interface NewLifeSelectLinkReq : WXPBGeneratedMessage

@property (nonatomic) unsigned int jumpInfoBusinessType;
@property (retain, nonatomic) FinderJumpInfo *jumpInfo;
@property (retain, nonatomic) FinderExtendedReading *extendedReading;
@property (nonatomic) BOOL hasRedPacket;
@property (retain, nonatomic) NSString *postSessionId;
@property (nonatomic) BOOL hasStickerList;

+ (void)initialize;

@end
