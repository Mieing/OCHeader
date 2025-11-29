@class NSString;

@interface WCMicroMerchantFeedExposureInfo : NSObject

@property (retain, nonatomic) NSString *foldedBlockId;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int feedCount;
@property (nonatomic) BOOL isExposured;
@property (nonatomic) BOOL isClicked;
@property (nonatomic) unsigned int index;
@property (nonatomic) unsigned int startTime;
@property (nonatomic) unsigned int wsFoldType;

- (id)init;
- (void).cxx_destruct;

@end
