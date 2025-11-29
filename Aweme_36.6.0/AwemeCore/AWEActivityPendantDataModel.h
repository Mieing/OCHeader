@class NSString, NSArray, NSDictionary;

@interface AWEActivityPendantDataModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long imageType;
@property (retain, nonatomic) NSString *staticExpandedURL;
@property (retain, nonatomic) NSString *staticFoldedURL;
@property (retain, nonatomic) NSString *lottiFileURL;
@property (retain, nonatomic) NSString *compressedLottieFileMD5;
@property (retain, nonatomic) NSArray *expandedPendantFrameList;
@property (retain, nonatomic) NSArray *foldedPendantFrameList;
@property (retain, nonatomic) NSString *routerURL;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
