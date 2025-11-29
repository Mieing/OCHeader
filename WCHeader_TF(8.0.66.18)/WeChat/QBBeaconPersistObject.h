@class NSString;

@interface QBBeaconPersistObject : QBBeaconEncodeObject <QBBeaconPersistEncoding>

@property (nonatomic) long long dbid;
@property (nonatomic) long long time;
@property (nonatomic) long long encLength;
@property (nonatomic) int priority;
@property (nonatomic) int type;
@property (nonatomic) long long md5;
@property (nonatomic) int dcount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;

@end
