@class NSString, NSData;

@interface WCFinderUploadPostProjectCgiParams : NSObject

@property (copy, nonatomic) NSString *postUserName;
@property (copy, nonatomic) NSString *clientId;
@property (copy, nonatomic) NSData *timelineInfo;
@property (copy, nonatomic) NSData *assetInfoChain;

- (void).cxx_destruct;

@end
