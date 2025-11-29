@class NSArray, NSString;

@interface FlowIMCameraTabConfigModel : NSObject {
    void /* unknown type, empty encoding */ defaultLandingTab;
    void /* function */ cameraTabList;
    void /* function */ cameraName;
    void /* function */ cameraNameUrl;
    void /* unknown type, empty encoding */ showOrderValue;
    void /* function */ tips;
}

@property (nonatomic, copy) NSArray *cameraTabList;
@property (nonatomic, copy) NSString *cameraName;
@property (nonatomic, copy) NSString *cameraNameUrl;
@property (nonatomic, copy) NSArray *tips;

- (void).cxx_destruct;
- (id)init;

@end
