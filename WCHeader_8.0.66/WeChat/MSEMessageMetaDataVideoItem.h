@class NSString;

@interface MSEMessageMetaDataVideoItem : NSObject <PBCoding>

@property (retain, nonatomic) NSString *toUsername;
@property (retain, nonatomic) NSString *videoUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_toUsername;
+ (void)PBArrayAdd_videoUrl;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
