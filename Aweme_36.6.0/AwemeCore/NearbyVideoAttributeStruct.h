@class NSString;

@interface NearbyVideoAttributeStruct : GPBMessage

@property (nonatomic) int isLocalLifeVideo;
@property (nonatomic) BOOL hasIsLocalLifeVideo;
@property (nonatomic) int hasSpuService_p;
@property (nonatomic) BOOL hasHasSpuService_p;
@property (copy, nonatomic) NSString *snackbar;
@property (nonatomic) BOOL hasSnackbar;
@property (nonatomic) int isLocalLifeExtVideo;
@property (nonatomic) BOOL hasIsLocalLifeExtVideo;

+ (id)descriptor;

- (int)isLocalLifeExtVideo;
- (id)snackbar;
- (int)hasSpuService_p;
- (int)isLocalLifeVideo;

@end
