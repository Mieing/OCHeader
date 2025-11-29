@class NSString, NSDictionary;

@interface AWESiriDonationBasicInfo : NSObject

@property (readonly, copy, nonatomic) NSString *sceneType;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;
@property (readonly, copy, nonatomic) NSDictionary *extraTrackParams;

- (id)initWithSceneType:(id)a0 userInfo:(id)a1 extraTrackParams:(id)a2;
- (void).cxx_destruct;

@end
