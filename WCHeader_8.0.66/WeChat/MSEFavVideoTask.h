@class NSString;

@interface MSEFavVideoTask : NSObject <PBCoding>

@property (retain, nonatomic) NSString *videoUrlStr;
@property (nonatomic) unsigned int videoLen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_videoUrlStr;
+ (void)PBArrayAdd_videoLen;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
