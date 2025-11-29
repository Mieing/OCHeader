@class NSArray, NSString, UIImage, IESLiveImageContent, NSNumber;

@interface IESLiveImage : IESLiveDynamicMTLModel <IESLiveImage, MTLJSONSerializing>

@property (retain, nonatomic) UIImage *localImage;
@property (retain, nonatomic) NSArray *urlList;
@property (retain, nonatomic) NSString *uri;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSString *placeholderColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *urlList;
@property (retain, nonatomic) NSString *uri;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSString *placeholderColor;
@property (nonatomic) unsigned long long imageType;
@property (retain, nonatomic) NSString *openWebURL;
@property (retain, nonatomic) IESLiveImageContent *content;
@property (nonatomic) BOOL isAnimated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentJSONTransformer;
+ (id)imageWithStruct:(id)a0;
+ (id)mapImagesToPbImage:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (id)mapToPBImage;
- (id)initWithUrlList:(id)a0 uri:(id)a1;
- (id)initWithPBImage:(id)a0;
- (id)initWithUrlList:(id)a0 uri:(id)a1 width:(id)a2 height:(id)a3 content:(id)a4 imageType:(int)a5;
- (void).cxx_destruct;

@end
