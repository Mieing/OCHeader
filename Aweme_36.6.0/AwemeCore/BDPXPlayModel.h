@class NSString, BDPUniqueID;

@interface BDPXPlayModel : NSObject <BDPXPlayModelProtocol>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *channel;
@property (nonatomic) unsigned long long displayWidth;
@property (nonatomic) unsigned long long displayHeight;
@property (nonatomic) long long originX;
@property (nonatomic) long long originY;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
