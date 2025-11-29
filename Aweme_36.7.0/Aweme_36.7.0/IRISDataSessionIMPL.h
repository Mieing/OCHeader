@class NSString;

@interface IRISDataSessionIMPL : NSObject <IRISDataSession, NSCopying>

@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned long long sessionType;
@property (nonatomic) BOOL isBackground;
@property (nonatomic) unsigned long long startTimestamp;
@property (nonatomic) unsigned long long lastActiveTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dictioanryValue;
- (void)terminate;
- (void).cxx_destruct;
- (BOOL)isAvailable;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
