@class NSString;

@interface FlowIMImageModelDataModel : NSObject {
    void /* function */ uri;
    void /* function */ tiny_url;
    void /* function */ origin_url;
    void /* function */ image_720;
}

@property (nonatomic, copy) NSString *uri;
@property (nonatomic, copy) NSString *tiny_url;
@property (nonatomic, copy) NSString *origin_url;
@property (nonatomic, copy) NSString *image_720;
@property (nonatomic, readonly) NSString *tintImageUrl;

- (id)initWithUri:(id)a0 tiny_url:(id)a1 origin_url:(id)a2 image_720:(id)a3;
- (id)toImageModelV2;
- (void).cxx_destruct;
- (id)init;

@end
