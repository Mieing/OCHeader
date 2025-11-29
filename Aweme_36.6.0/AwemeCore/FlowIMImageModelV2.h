@class FlowIMImageObject, NSString;

@interface FlowIMImageModelV2 : NSObject {
    void /* function */ uri;
}

@property (nonatomic, retain) FlowIMImageObject *imageThumb;
@property (nonatomic, retain) FlowIMImageObject *imageOri;
@property (nonatomic, copy) NSString *uri;
@property (nonatomic, retain) FlowIMImageObject *image720;

- (id)initWithImageThumb:(id)a0 imageOri:(id)a1 uri:(id)a2 image720:(id)a3;
- (id)toImageModel;
- (void).cxx_destruct;
- (id)init;

@end
