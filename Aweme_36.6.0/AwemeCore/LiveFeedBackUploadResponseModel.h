@class NSString, NSArray;

@interface LiveFeedBackUploadResponseModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *webURI;
@property (retain, nonatomic) NSArray *urlList;
@property (nonatomic) double imageWidth;
@property (nonatomic) double imageHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
