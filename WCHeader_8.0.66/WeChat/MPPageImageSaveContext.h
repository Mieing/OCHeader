@class NSString;

@interface MPPageImageSaveContext : NSObject

@property (copy, nonatomic) NSString *pageDataKeyURL;
@property (copy, nonatomic) NSString *imageURL;
@property (nonatomic) BOOL saveAfterDecodeOnly;
@property (nonatomic) BOOL saveToExternalCache;

- (void).cxx_destruct;

@end
