@class NSString, UIImage, NSArray, NSDictionary, NSObject, AWEDemaciaUserModel, AWEDemaciaVideoModel, AWEDemaciaStatusModel;

@interface AWEDemaciaPlayerVideoModel : NSObject

@property (nonatomic) BOOL isCanPlay;
@property (nonatomic) BOOL isVRVideo;
@property (nonatomic) BOOL userFavorited;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (nonatomic) long long awemeType;
@property (nonatomic) long long mediaType;
@property (retain, nonatomic) UIImage *coverImage;
@property (retain, nonatomic) AWEDemaciaStatusModel *status;
@property (retain, nonatomic) AWEDemaciaUserModel *author;
@property (retain, nonatomic) NSObject *music;
@property (retain, nonatomic) AWEDemaciaVideoModel *video;
@property (copy, nonatomic) NSArray *longVideo;
@property (copy, nonatomic) NSArray *localVideoUrlArray;
@property (copy, nonatomic) NSString *videoDecryptionKey;
@property (nonatomic, getter=isResourceRecalled) BOOL resourceRecalled;

- (void).cxx_destruct;
- (id)init;

@end
