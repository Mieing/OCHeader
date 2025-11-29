@class NSString, IESECLiveEditCartResultTrackInfo;

@interface IESECLiveSubCartInfo : NSObject

@property (retain, nonatomic) NSString *editCartRequestPath;
@property (retain, nonatomic) NSString *editCartRequestParamOrigin;
@property (retain, nonatomic) IESECLiveEditCartResultTrackInfo *resultTrackInfo;

- (void).cxx_destruct;
- (id)init;

@end
