@class NSString, NSURL, MMFinderLiveResChecker;

@interface MMFinderLiveResDownloaderItem : NSObject

@property (retain, nonatomic) NSString *itemId;
@property (nonatomic) unsigned long long retryCount;
@property (retain, nonatomic) NSString *downloadUrl;
@property (retain, nonatomic) NSString *downloadUrlHash;
@property (retain, nonatomic) NSString *fileMD5;
@property (retain, nonatomic) NSURL *downloadPath;
@property (retain, nonatomic) NSString *resPath;
@property (retain, nonatomic) NSURL *cachePath;
@property (retain, nonatomic) MMFinderLiveResChecker *checker;
@property (nonatomic) long long totalLength;
@property (copy, nonatomic) id /* block */ downloadCompletion;
@property (nonatomic) unsigned long long state;
@property (nonatomic) BOOL useProprietaryProtocol;

- (void).cxx_destruct;

@end
