@class NSString, UIImage, NSData, NSError, AWEURLModel;

@interface AWEAIGCResultDateModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) AWEURLModel *URLModel;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) UIImage *resultImage;
@property (copy, nonatomic) NSString *resultFilePath;
@property (copy, nonatomic) NSData *imageData;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *metaJson;
@property (nonatomic) long long mediaType;
@property (nonatomic) long long materialType;
@property (copy, nonatomic) NSString *binaryDataStr;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *descriptionString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
