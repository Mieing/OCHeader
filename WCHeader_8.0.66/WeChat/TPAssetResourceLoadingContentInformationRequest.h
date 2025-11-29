@class NSString;
@protocol TPAssetResourceLoadingContentInformationRequestDelegate;

@interface TPAssetResourceLoadingContentInformationRequest : NSObject

@property (weak, nonatomic) id<TPAssetResourceLoadingContentInformationRequestDelegate> delegate;
@property (copy, nonatomic) NSString *contentType;
@property (nonatomic) long long contentLength;
@property (copy, nonatomic) NSString *dataReadFilePath;
@property (nonatomic) BOOL usePollingMode;

- (void)setInformationRequestDelegate:(id)a0;
- (void).cxx_destruct;

@end
