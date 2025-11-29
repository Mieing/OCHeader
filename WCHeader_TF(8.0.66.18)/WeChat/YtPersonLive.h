@class NSArray, NSString, YtDataPack_OC, NSDictionary;
@protocol YtFaceFrame_OC;

@interface YtPersonLive : JSONModel

@property (retain, nonatomic) NSArray<YtFaceFrame_OC> *frames;
@property (retain, nonatomic) NSString *validate_data;
@property (retain, nonatomic) NSString *voice;
@property (retain, nonatomic) NSString *mouth_move;
@property (retain, nonatomic) NSString *mouth_lip_reading;
@property (retain, nonatomic) YtDataPack_OC *reflect_data;
@property (retain, nonatomic) NSString *color_data;
@property (nonatomic) int platform;
@property (retain, nonatomic) NSString *client_version;
@property (retain, nonatomic) NSDictionary *select_data;

- (void).cxx_destruct;

@end
