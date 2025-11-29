@class NSString, NSMutableDictionary;

@interface WCCanvasComponentHalfRandomSubCardPersistenceInfo : MMObject <NSCoding, PBCoding>

@property (retain, nonatomic) NSString *redPacketCoverUrl;
@property (retain, nonatomic) NSMutableDictionary *sendBulletComments;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_redPacketCoverUrl;
+ (void)PBArrayAdd_sendBulletComments;
+ (void)initialize;

@end
