@class NSString;

@interface CKImageQualityKit.ImageQualityTrackSceneEdit : NSObject <LMImageQualityTrackSceneProtocol> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ infos;
    void /* unknown type, empty encoding */ previewViewSize;
    void /* unknown type, empty encoding */ isFromDraft;
}

@property (class, nonatomic, readonly) NSString *scene;

@property (nonatomic, weak) void /* function */ session;

- (id)init:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)track:(id)a0;

@end
