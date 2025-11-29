@class NSString, NSDictionary;

@interface AWEDCFeedChunkManagerRequestConfig : NSObject

@property (retain, nonatomic) NSString *urlString;
@property (retain, nonatomic) NSDictionary *URLParams;
@property (retain, nonatomic) NSDictionary *bodyParams;
@property (retain, nonatomic) NSDictionary *header;
@property (nonatomic) BOOL isPost;
@property (copy, nonatomic) id /* block */ pbFinishBlock;
@property (copy, nonatomic) id /* block */ receiveDataBlock;
@property (copy, nonatomic) id /* block */ chunkFinishBlock;
@property (retain, nonatomic) Class proxyClass;
@property (retain, nonatomic) Class dataHelperClass;
@property (retain, nonatomic) Class requestSerializerClass;
@property (copy, nonatomic) id /* block */ preloadImageBlock;
@property (nonatomic) BOOL enableDispatchRequest;

- (void).cxx_destruct;

@end
