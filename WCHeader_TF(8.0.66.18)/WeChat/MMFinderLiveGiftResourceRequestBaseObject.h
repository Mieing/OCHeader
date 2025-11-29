@class NSURL, NSString, MMFinderLiveGiftResourceExtraInfo;

@interface MMFinderLiveGiftResourceRequestBaseObject : NSObject

@property (retain, nonatomic) NSURL *targetURL;
@property (nonatomic) long long expectedContentLength;
@property (retain, nonatomic) NSString *contentType;
@property (nonatomic) unsigned long long beginTimeStamp;
@property (retain, nonatomic) NSString *productID;
@property (nonatomic) long long resType;
@property (nonatomic) long long subResType;
@property (retain, nonatomic) NSString *fileMD5;
@property (nonatomic) unsigned int retryCount;
@property (nonatomic) unsigned long long memoryCacheOptions;
@property (nonatomic) BOOL isPreload;
@property (retain, nonatomic) NSString *observerSubscriptionKey;
@property (retain, nonatomic) MMFinderLiveGiftResourceExtraInfo *extraInfo;

- (void).cxx_destruct;

@end
