@class NSString;

@interface FlowIMCameraTypeModel : NSObject {
    void /* unknown type, empty encoding */ cameraId;
    void /* function */ type;
    void /* function */ name;
}

@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (id)init;

@end
