@class NSString, NSData;

@interface MMCameraTemplateItem : NSObject

@property (copy, nonatomic) NSString *id;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *authorDisplayName;
@property (copy, nonatomic) NSString *authorProfilePicURL;
@property (nonatomic) BOOL isFav;
@property (nonatomic) BOOL isFavLatest;
@property (nonatomic) unsigned long long maasIosMinVersion;
@property (copy, nonatomic) NSString *templateDescURL;
@property (nonatomic) unsigned long long templateDescVersion;
@property (nonatomic) unsigned long long cameraPosition;
@property (copy, nonatomic) NSString *previewImageURL;
@property (retain, nonatomic) NSData *sessionBuffer;

+ (id)itemFromVideoTemplate:(id)a0;
+ (id)itemFromMJVideoTemplate:(id)a0;
+ (id)genTempateItemList;
+ (id)emptyItem;
+ (id)hardCodeJsonData;

- (void)setFinderEventName:(id)a0;
- (id)finderEventName;
- (void)setFinderEventCreateUsrNickname:(id)a0;
- (id)finderEventCreateUsrNickname;
- (BOOL)isEmptyItem;
- (id)title;
- (id)colorString;
- (id)description;
- (void).cxx_destruct;

@end
