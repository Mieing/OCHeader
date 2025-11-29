@class NSNumber, NSString;

@interface BizPhotoExtInfo : NSObject

@property (retain, nonatomic) NSNumber *latitude;
@property (retain, nonatomic) NSNumber *longitude;
@property (retain, nonatomic) NSNumber *isLivePhoto;
@property (copy, nonatomic) NSString *livePhotoVideoPath;
@property (copy, nonatomic) NSString *aiPicId;
@property (copy, nonatomic) NSString *aiPicPrompt;
@property (retain, nonatomic) NSNumber *aiPicSource;

+ (id)makeWithLatitude:(id)a0 longitude:(id)a1 isLivePhoto:(id)a2 livePhotoVideoPath:(id)a3 aiPicId:(id)a4 aiPicPrompt:(id)a5 aiPicSource:(id)a6;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
