@class NSString;

@interface WCAdRandomPickCardExtInfo : NSObject <NSCoding, PBCoding>

@property (retain, nonatomic) NSString *cardDynamicInfo;
@property (retain, nonatomic) NSString *redPacketCoverUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_cardDynamicInfo;
+ (void)PBArrayAdd_redPacketCoverUrl;
+ (void)initialize;
+ (id)fromResponseExtInfo:(id)a0;

@end
