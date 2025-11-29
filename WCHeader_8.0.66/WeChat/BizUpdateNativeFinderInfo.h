@class NSString;

@interface BizUpdateNativeFinderInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *finderObjectId;
@property (nonatomic) BOOL isRedPacket;
@property (retain, nonatomic) NSString *recReason;
@property (nonatomic) BOOL recReasonUpdFlag;

+ (void)initialize;

@end
