@class NSString;

@interface CKImageQualityKit.ImageQualityTrackScenePublish : NSObject <LMImageQualityTrackSceneProtocol> {
    void /* unknown type, empty encoding */ infoMap;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ itemId;
    void /* unknown type, empty encoding */ extra;
}

@property (class, nonatomic, readonly) NSString *scene;

@property (nonatomic, weak) void /* function */ session;

- (id)trackInfoDict:(id)a0;
- (id)init:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)track:(id)a0;

@end
