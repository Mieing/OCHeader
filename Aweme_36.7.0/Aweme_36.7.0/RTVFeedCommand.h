@class NSString, NSDictionary, NSNumber;
@protocol Optional;

@interface RTVFeedCommand : JSONModel <RTVXRRoomMessageContent>

@property (copy, nonatomic) NSString *fromUserID;
@property (copy, nonatomic) NSString *sharingID;
@property (copy, nonatomic) NSString<Optional> *version;
@property (copy, nonatomic) NSString *payload;
@property (copy, nonatomic) NSDictionary<Optional> *payloadDict;
@property (retain, nonatomic) NSNumber<Optional> *isActive;
@property (nonatomic) long long index;
@property (readonly, nonatomic) long long commandType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (long long)messageType;

- (id)payloadDictionay;
- (id)initWithPayload:(id)a0 fromUserID:(id)a1 index:(long long)a2;
- (long long)messageMethod;
- (long long)sendChannel;
- (void)updateActive:(BOOL)a0;
- (void)setPayloadWithNSString:(id)a0;
- (id)JSONObjectForPayload;
- (id)JSONObjectForFromUserID;
- (id)JSONObjectForSharingID;
- (void).cxx_destruct;
- (BOOL)isInactive;
- (id)JSONObjectForVersion;

@end
