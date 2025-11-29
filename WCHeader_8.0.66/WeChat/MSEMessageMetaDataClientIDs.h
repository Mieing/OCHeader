@class NSArray, NSString;

@interface MSEMessageMetaDataClientIDs : NSObject <PBCoding>

@property (retain, nonatomic) NSArray *imgClientIDs;
@property (retain, nonatomic) NSString *videoClientID;
@property (retain, nonatomic) NSString *appmsgClientID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_imgClientIDs;
+ (void)PBArrayAdd_videoClientID;
+ (void)PBArrayAdd_appmsgClientID;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
