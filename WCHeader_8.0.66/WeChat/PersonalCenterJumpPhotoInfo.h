@class NSString, NSNumber;

@interface PersonalCenterJumpPhotoInfo : NSObject

@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *mimeType;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSNumber *isLivePhoto;
@property (copy, nonatomic) NSString *livePhotoVideoPath;
@property (retain, nonatomic) NSNumber *latitude;
@property (retain, nonatomic) NSNumber *longitude;
@property (copy, nonatomic) NSString *aiPicId;
@property (copy, nonatomic) NSString *aiPicPrompt;
@property (retain, nonatomic) NSNumber *aiPicSource;

+ (id)makeWithPath:(id)a0 mimeType:(id)a1 width:(id)a2 height:(id)a3 isLivePhoto:(id)a4 livePhotoVideoPath:(id)a5 latitude:(id)a6 longitude:(id)a7 aiPicId:(id)a8 aiPicPrompt:(id)a9 aiPicSource:(id)a10;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
